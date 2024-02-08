class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int j=1, c=0,d=0;
        for(int i=0;i<nums.size()-1;i++){
            if (nums[i]<nums[j]){
                c++;
            }
            else if (nums[i]>nums[j]){
                d++;
            }
            j++;
        }
        if (c==0 || d==0) return true;
        return false;
    }
};
