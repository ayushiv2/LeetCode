class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> deque;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (!deque.empty() && deque.front() == i - k)
                deque.pop_front();

            while (!deque.empty() && nums[deque.back()] < nums[i])
                deque.pop_back();

            deque.push_back(i);
            if (i >= k - 1)
                result.push_back(nums[deque.front()]);
        }
        return result;
    }
};
