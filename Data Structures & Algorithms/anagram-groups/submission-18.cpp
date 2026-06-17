class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;

        for(int i = 0;i < size;i++){
            string word = strs[i];
            string freqkey = "";
            array<int,26> freq{};
            for(char c: word){
                freq[c - 'a']++;
            }
            for(int i = 0;i < 26;i++){
                if(freq[i] > 0){
                    char temp = 'a' + i;
                    freqkey += temp;
                    freqkey += to_string(freq[i]);
                }
            }
            mp[freqkey].push_back(strs[i]);
        }

            for(auto& pair:mp){
                ans.push_back(pair.second);
            }


        return ans;
    }
};
