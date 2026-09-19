class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        vector<vector<char>>matrix(numRows);
        int row=0;
        int col=0;
        bool goingdown=true;
        for(int i=0;i<n;i++){
            matrix[row].push_back(s[i]);
            if(numRows==1){
                return s;
            }

            if(goingdown){
                if(row==numRows-1){
                    goingdown=false;
                    row=row-1;
                    col=col+1;
                }
                else{
                    row++;
                }
            }
            else{
                if (row == 0) {
                    goingdown=true;
                    row++;
                }
                else{
                    row--;
                    col++;
                }
            }
        }
        string ans = "";
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                ans+=matrix[i][j];
            }
        }
        return ans;
        
    }
};