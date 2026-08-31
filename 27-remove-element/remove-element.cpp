class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=nums.size()-1;
        int size=nums.size();
        while(i<=j){
            if(nums[i]==val && nums[j]!=val){
                swap(nums[i],nums[j]);
                i++;
                j--;
                size--;
            }
            else if(nums[j]==val){
                j--;
                size--;
            }
            else{
                i++;
            }
        }
        return size;

    }
};