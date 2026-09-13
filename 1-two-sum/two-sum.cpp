class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int difference=target-nums[i];
            if(mpp.find(difference)!=mpp.end()){
                return {i,mpp[difference]};
            }
            else{
                mpp[nums[i]]=i;
            }

        }
        return {};

    }
};