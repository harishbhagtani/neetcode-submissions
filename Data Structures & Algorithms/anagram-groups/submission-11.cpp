class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;

        for(int i = 0;i < size;i++){
            string word = strs[i];
            sort(word.begin(), word.end());
            mp[word].push_back(strs[i]);
        }

            for(auto& pair:mp){
                ans.push_back(pair.second);
            }


        return ans;
    }
};
