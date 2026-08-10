class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long total = 0;
        vector<int> st;
        
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || nums[st.back()] > nums[i])) {
                int mid = st.back();
                st.pop_back();
                
                int left = st.empty() ? -1 : st.back();
                int right = i;
                
                total -= (long long)nums[mid] * (mid - left) * (right - mid);
            }
            st.push_back(i);
        }
        
        st.clear(); 
        
        
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || nums[st.back()] < nums[i])) {
                int mid = st.back();
                st.pop_back();
                
                int left = st.empty() ? -1 : st.back();
                int right = i;
                
                total += (long long)nums[mid] * (mid - left) * (right - mid);
            }
            st.push_back(i);
        }
        
        return total;
    }
};