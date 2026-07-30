class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>ans;
        for(auto it:mpp){
            ans.push_back({it.second,it.first});
        }
        sort(ans.rbegin(),ans.rend());
        vector<int>v;
        for(int i=0;i<k;i++){
            v.push_back(ans[i].second);
        }
        return v;

        
    }
};