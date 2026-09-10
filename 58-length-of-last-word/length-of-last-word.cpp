class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        int n=s.size();
        bool space=true;
        int i=n-1;
        while(i>=0){
            if(s[i]==' ' && space==true){
                i--;
            }
            else if(s[i]!=' '){
                i--;
                cnt++;
                space=false;
            }
            else{
                break;
            }
        }
        return cnt;
    }
};