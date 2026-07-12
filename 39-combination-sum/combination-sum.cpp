class Solution {
public:
void findcombination(vector<int>&candidates,vector<vector<int>>&ans,vector<int>&ds , int ind,int target){
    if(ind==candidates.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(candidates[ind]<=target){
        ds.push_back(candidates[ind]);
        findcombination(candidates,ans,ds,ind,target-candidates[ind]);
        ds.pop_back();
    }
    findcombination(candidates,ans,ds,ind+1,target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcombination(candidates,ans,ds,0,target);
        return ans;
        
    }
};