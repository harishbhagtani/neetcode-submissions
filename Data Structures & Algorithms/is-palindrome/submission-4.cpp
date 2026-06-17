class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        int start = 0;
        int end = len - 1;
        while(start < end){
            if(s[start] == ' ' || !isalnum(s[start])) {
                start++;
                continue;
            }
            if(s[end] == ' ' || !isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
