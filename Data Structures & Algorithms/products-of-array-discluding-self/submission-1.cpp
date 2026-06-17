class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        for(int i = 0;i < size;i++){
            int prod = 1;
            for(int j = 0;j < size;j++){
                if(i != j){
                    prod = prod * nums[j];
                }
            }
            ans.push_back(prod);
        }
        return ans;
    }
};
