class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> circle;
        for (int i = 1; i <= n; ++i) {
            circle.push_back(i);
        }
        int cur_ind = 0;

        while (circle.size() > 1) {
            int remove = (cur_ind + k - 1) % circle.size();
            circle.erase(circle.begin() + remove);
            cur_ind = remove;
        }

        return circle[0];
    }
};
