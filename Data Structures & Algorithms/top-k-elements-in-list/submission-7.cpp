class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> freqMap;
        for(int n: nums){
            freqMap[n]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& [num,count]: freqMap){
            bucket[count].push_back(num);
        }
        for(int i = bucket.size() - 1;i >= 0 && ans.size() < k;i--){
            for(int num: bucket[i]){
                ans.push_back(num);
                if(ans.size() == k){
                    return ans;
                }
            }
        }

        return ans;
    }
};
