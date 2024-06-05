class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int n=nums.size()/2;

        for (auto i:nums){
            map[i]++;
        }
        int c=0;
        for (auto i:map){
            if (i.second >n){
                c=i.first;
            }
        }
        return c;
    }
};
