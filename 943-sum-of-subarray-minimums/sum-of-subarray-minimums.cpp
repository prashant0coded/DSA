class Solution {
public:
vector<int> nse(vector<int>&arr){
    int n=arr.size();
    vector<int>nse(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        nse[i]=st.empty()?n:st.top();
        st.push(i);
    }
    return nse;
}
vector<int> pse(vector<int>&arr){
    int n=arr.size();
    vector<int>pse(n);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        pse[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return pse;
}
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        int total=0;
        int MOD=1e9+7;
        vector<int>p=pse(arr);
        vector<int>ns=nse(arr);
        for(int i=0;i<n;i++){
            int left=i-p[i];
            int right=ns[i]-i;
            total=(total+(left*right*1LL*arr[i])%MOD)%MOD;
        }
        return total;

    }
};