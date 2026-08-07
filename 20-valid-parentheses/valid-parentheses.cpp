class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size();
        for(auto c:s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else if(c==')' || c=='}' || c==']'){
                if(st.empty()) return false;
                else{
                    char x=st.top();
                    if((c==')' && x!='(') || (c=='}' && x!='{') || (c==']' && x!='[')){
                        return false;
                    }
                }
                st.pop();
            }
        }
        return st.empty();
    }
};