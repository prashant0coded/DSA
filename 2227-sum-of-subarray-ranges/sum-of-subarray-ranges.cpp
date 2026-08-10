class Solution {
public:
    vector<int> nge(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nge;
    }

    vector<int> pge(vector<int>& arr) {
        int n = arr.size();
        vector<int> pge(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pge;
    }

    vector<int> nse(vector<int>& nums) {
        int n = nums.size();
        vector<int> nse(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nse;
    }

    vector<int> pse(vector<int>& nums) {
        int n = nums.size();
        vector<int> pse(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pse;
    }

   
    long long sumMin(vector<int>& nums) {
        int n = nums.size();
        long long total = 0; 
        vector<int> p = pse(nums);
        vector<int> ns = nse(nums);
        for (int i = 0; i < n; i++) {
            long long left = i - p[i];    
            long long right = ns[i] - i;  
            total += (left * right * nums[i]);
        }
        return total;
    }


    long long sumMax(vector<int>& nums) {
        int n = nums.size();
        long long total = 0; 
        vector<int> p = pge(nums);
        vector<int> ns = nge(nums);
        for (int i = 0; i < n; i++) {
            long long left = i - p[i];    
            long long right = ns[i] - i;  
            total += (left * right * nums[i]);
        }
        return total;
    }

    long long subArrayRanges(vector<int>& nums) {
        return sumMax(nums) - sumMin(nums);
    }
};