class Solution {
public:
    bool isAnagram(string s, string t) {
        int sizeS = s.size();
        int sizeT = t.size();
        unordered_map<char,int> freqS;
        unordered_map<char,int> freqT;

        if(sizeS != sizeT){
            return false;
        }

        freqS.reserve(26);
        freqT.reserve(26);

    for(int i = 0;i < sizeS;i++){
        freqS[s[i]]++;
    }
     for(int i = 0;i < sizeS;i++){
        freqT[t[i]]++;
    }

    if(freqS.size() != freqT.size()){
        return false;
    }

    for(int i = 0;i < sizeS;i++){
        if(freqS[s[i]] != freqT[s[i]]){
            return false;
        }
    }

    return true;
    
        
    }
};
