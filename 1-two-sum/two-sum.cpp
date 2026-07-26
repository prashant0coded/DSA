class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0; i<n; i++){
            int difference=target-nums[i];
            if(mpp.find(difference)!=mpp.end()){
                return {mpp[difference],i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};