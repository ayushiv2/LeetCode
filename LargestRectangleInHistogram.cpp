class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stack;
        int m = 0;
        int n = heights.size();
        for (int i = 0; i <= n; i++) {
            while (!stack.empty() && (i == n || heights[stack.top()] >= heights[i])) {
                int height = heights[stack.top()];
                stack.pop();
                int width;
                if (stack.empty())
                    width = i;
                else
                    width = i - stack.top() - 1;
                m = max(m, width * height);
            }
            stack.push(i);
        }
        return m;
    }
};
