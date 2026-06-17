class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> comMap;
        comMap.reserve(nums.size());

        for(int i = 0;i<nums.size();i++){
            int complement = target - nums[i];
            if(comMap.find(complement) != comMap.end()){
                return {comMap[complement],i};
            }
            comMap[nums[i]] = i;
        }
        return {};
    }
};
