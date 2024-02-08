class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=1;j<nums.size();j++){
                if (target==nums[i]+nums[j])
                {
                    if (i!=j){
                        return vector<int> {i,j};
                    }
                }
            }
        }
        return vector<int> {0};
    }
};
