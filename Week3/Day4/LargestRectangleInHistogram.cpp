class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st1;
        st1.push(-1);
        int maxa=0;
        for(int i=0;i<heights.size();i++){
            while(st1.top()!=-1 && heights[i]<=heights[st1.top()]){
                int h=heights[st1.top()];
                st1.pop();
                int width=i-st1.top()-1;
                maxa=max(maxa,h*width);
            }
            st1.push(i);
        }
        while(st1.top()!=-1){
            int h=heights[st1.top()];
            st1.pop();
            int width=heights.size()-st1.top()-1;
            maxa=max(maxa,h*width);
        }
        return maxa;
    }
};