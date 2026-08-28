class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int i=0;
        int profit=0;
        unordered_map<int,int>mpp;
        while(i!=bills.size()){
            if(bills[i]==10){
                if(mpp[5]>0){
                    mpp[5]--;
                    mpp[10]++;
                    i++;
                }
                else{
                    return false;
                }
            }
            else if(bills[i]==20){
                if(mpp[5]>0 && mpp[10]>0){
                    mpp[5]--;
                    mpp[10]--;
                    mpp[20]++;
                    i++;
                }
                else if(mpp[5]>=3){
                    int j=3;
                    while(j!=0){
                        mpp[5]--;
                        j--;
                    }
                    mpp[20]++;
                    i++;
                    
                }
                else{
                    return false;

                }
            }
            else{
                mpp[5]++;
                i++;
            }

        }
        return true;
        
    }
};