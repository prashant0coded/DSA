class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        long long num = x;
    
        if(num<0){
            num=abs(num);
            int a;
            while(num){
                a=num%10;
                num=num/10;
                rev=rev*10+a;
            }
            if(rev<INT_MIN || rev>INT_MAX){
                return 0;
                }
            else{
                return -rev;
            }
        }
        else{
            int a;
            while(num!=0){
                a=num%10;
                num=num/10;
                rev=rev*10+a;
            }
            if(rev<INT_MIN || rev>INT_MAX){
                return 0;
            }
            else{
                return rev;
            }
        }
    }
};