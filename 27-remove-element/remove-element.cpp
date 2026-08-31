class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        while(i<nums.size()){
            if(nums[i]==val){
                int j=i;
                while(j<nums.size()-1){
                    nums[j]=nums[j+1];
                    j++;
                }
                nums.pop_back();
            }
            else{
                i++;
            }
        }

        int count=0;
        for(int i=0;i<nums.size();i++){
            count++;
        }
        return count;
        
    }
};