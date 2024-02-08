class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(), c = 1;
        while (n >= 1) {
            digits[n - 1] = digits[n - 1] + c;
            c = 0;
            if (digits[n - 1] == 10) {
                digits[n - 1] = 0;
                c = 1;
                n = n - 1;
            } 
            else {
                break;
            }
        }
        if (c == 1) {
            digits.resize(digits.size() + 1);
            for (int i = digits.size() - 1; i >= 1; i--) {
                digits[i] = digits[i - 1];
            }
            digits[0] = c;
        }
        return digits;
    }
};
