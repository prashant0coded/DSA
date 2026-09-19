class Solution {
public:
static bool comp(const vector<int>& val1, const vector<int>& val2) {
    return val1[1] < val2[1];
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),comp);
        int i=0;
        int lasttime=intervals[0][1];
        int cnt=0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]<lasttime){
                cnt++;
            }
            else{
                lasttime=intervals[i][1];
            }
        }
        return cnt;
        
    }
};