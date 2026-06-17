class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool isDuplicateFound = false;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int num = nums[i];
            for(int j = i + 1;j < n;j++){
                if(nums[i] == nums[j]){
                    isDuplicateFound = true;
                }
            }
        }
        return isDuplicateFound;
    }
};