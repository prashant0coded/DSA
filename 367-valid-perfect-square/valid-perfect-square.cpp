class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0;
        int high=num;
        int mid=0;
        while(low<=high){
            mid=low+(high-low)/2;
            long long square=1LL*mid*mid;
            if(square>num){
                high=mid-1;
            }
            else if(square==num){
                return true;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};