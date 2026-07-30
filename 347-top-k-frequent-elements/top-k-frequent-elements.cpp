class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>>bucket(n+1);
        for(auto it:mpp){
           bucket[it.second].push_back(it.first);
        }

       vector<int>ans;
       for(int i=n; i>=1 && ans.size()<k ;i--){
           for(int x : bucket[i]){
                ans.push_back(x);
                if(ans.size() == k)
                    break;
            }
        }
        return ans;

        
    }
};