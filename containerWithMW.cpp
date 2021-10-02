class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1 = 0, p2 = height.size()-1;
        int area = 0;
        while(p1<p2)
        {
            int ht = min(height[p1], height[p2]);
            int wd = p2-p1;
            area = max(area, ht*wd);
            height[p1]<height[p2] ? p1++ : p2--;
        }
        return area;
    }
};
