class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int count=0;
        int maxi=0;
        while(i<n){
            if(nums[i]==1){
                i++;
                count++;
                maxi=max(count,maxi);
            }
            else{
                i++;
                count=0;
            }
        }
        return maxi;
        
    }
};