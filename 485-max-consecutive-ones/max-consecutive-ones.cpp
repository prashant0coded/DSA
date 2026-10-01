class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int cur=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cur=0;
            }
            else{
                cur=cur+1;
            }
            maxi=max(maxi,cur);
        }
        return maxi;
        
    }
};