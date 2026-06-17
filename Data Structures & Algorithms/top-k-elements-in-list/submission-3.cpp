class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        int kVal = k;
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto& pair: mp){
            pq.push({pair.second,pair.first});
        }
        while(!pq.empty() && kVal > 0){
            auto [freq, num] = pq.top();
            ans.push_back(num);
            pq.pop();
            kVal--;
        }
        return ans;
    }
};
