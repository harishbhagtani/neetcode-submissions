class Solution {

public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string word: strs){
            int len = word.length();
            encoded = encoded + to_string(len) + "#" + word;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;

        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }

            int len = stoi(s.substr(i, j -i));
            string word = s.substr(j + 1, len);
            decoded.push_back(word);
            i = j + len + 1;
        }
        return decoded;

    }
};
