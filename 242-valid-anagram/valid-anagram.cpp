class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        map<char,int>mpp1;
        for(int i=0;i<t.size();i++){
            mpp1[t[i]]++;
        }
        for(char i='a'; i<='z'; i++){
            if(mpp[i]!=mpp1[i]){
                return false;

            }
        }
        return true;
        
    }
};