class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int heights=0;
        int width=0;
        int area=0;
        int maximum=0;
        while(i<j){
            heights=min(height[i],height[j]);
            width=j-i;
            area=heights*width;
            maximum=max(maximum,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maximum;
    }
};