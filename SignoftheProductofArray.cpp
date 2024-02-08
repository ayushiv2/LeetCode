class Solution {
public:
    int arraySign(vector<int>& nums) {
        int p=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]<0){
                p++;
            }
            else if(nums[i]==0){
                return 0;
            }
        } 
        if (p%2!=0){
            return -1;
        }
        return 1;
    }
};
