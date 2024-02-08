class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=nums.size()-1; i>0;i--){
            for(int j=nums.size()-1; j>0;j--){
                if (nums[j-1]==0 && nums[j]!=0){
                    swap(nums[j],nums[j-1]);
                }
            }
        }
    }
};
