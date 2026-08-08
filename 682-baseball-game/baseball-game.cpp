class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        vector<int>ans;
        for(int it=0; it<n ;it++){
            if(operations[it]=="C"){
                ans.pop_back();
            }
            else if(operations[it]=="D"){
                ans.push_back(2*ans.back());
            }
            else if(operations[it]=="+"){
                int n=ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }
            else{
                int x = stoi(operations[it]);
                ans.push_back(x);
            }
        }
        int sum=0;
        for(int x:ans){
            sum+=x;
        }
        return sum;
        
    }
};