class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        vector<vector<string>> ans;
        map<array<int,26>, vector<string>> mp;

        for(int i = 0;i < size;i++){
            string word = strs[i];
            array<int,26> freq{};
            for(char c: word){
                freq[c - 'a']++;
            }
            mp[freq].push_back(strs[i]);
        }

            for(auto& pair:mp){
                ans.push_back(pair.second);
            }


        return ans;
    }
};
