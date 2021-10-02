class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(); //n is the size of the height vector
        
        vector<int> leftMax(n,0); //leftMax[i] will store the maximum height from index 0 to i
        leftMax[0] = height[0];
        
        vector<int> rightMax(n,0); //rightMax[i] will store the maximum height from index n-1 to i
        rightMax[n-1] = height[n-1];
        
        // creation of leftMax vector
        for(int i=1; i<n; i++)
        {
            leftMax[i] = max(leftMax[i-1], height[i]);
        }
        
        // creation of rightMax vector
        for(int i=n-2; i>=0; i--)
        {
            rightMax[i] = max(rightMax[i+1], height[i]);
        }
        
        // now accumulating the water trapped over all the buildings
        int water = 0;
        for(int i=0; i<n; i++)
        {
            water += min(leftMax[i], rightMax[i]) - height[i];
        }
        return water;
    }
    //Time Compexity O(N)
    //Space Complexity O(N)
};
