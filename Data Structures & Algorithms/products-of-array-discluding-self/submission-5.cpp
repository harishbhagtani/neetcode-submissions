class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int zeroCount = 0;
        int zeroPos = -1;
        int fullProd = 1;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0){
                zeroCount++;
                zeroPos = i;
            } else{
                fullProd = fullProd * nums[i];
            }
        }
        if(zeroCount == 1){
            for(int i = 0;i < nums.size();i++){
                if(i == zeroPos){
                    ans.push_back(fullProd);
                }else{
                    ans.push_back(0);
                }
            }
            return ans;
        }
        if(zeroCount > 1){
            for(int n:nums){
                ans.push_back(0);
            }
            return ans;
        }
        for(int i = 0;i < nums.size();i++){
            int currAns = fullProd / nums[i];
            ans.push_back(currAns);
        }
        return ans;
    }
};
