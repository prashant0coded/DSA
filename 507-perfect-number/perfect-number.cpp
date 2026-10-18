class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>ans;
        int n=num/2;
        for(int i=1;i<=n;i++){
            if(num%i==0){
                ans.push_back(i);
            }
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum=sum+ans[i];
        }
        if(sum==num) {
            return true;
        }
        else{
            return false;
        }
        
    }
};