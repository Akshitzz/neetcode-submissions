class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0;
        int end = heights.size() - 1;
        int maxwater = 0;

        while(start < end){
            int height = min(heights[start], heights[end]);
            int width = end - start;

            maxwater = max(maxwater, height * width);

            if(heights[start] < heights[end]){
                start++;
            } else {
                end--;
            }
        }

        return maxwater;
    }
};