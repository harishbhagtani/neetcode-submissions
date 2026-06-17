class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int size = nums.size();
        for(int i = 0;i < size;i++){
            for(int j = 0;j < size;j++){
                if(i != j && (nums[i] + nums[j] == target)){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
            if(ans.size() > 0){
                break;
            }
        }
        return ans;
        
    }
};
