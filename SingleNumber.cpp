class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for (int i=0;i<nums.size();i++){
            map[nums[i]]++;
        } 
        for(auto j:map){
            if (j.second==1){
                return j.first;
            }
        }
        return 1;
    }
};
