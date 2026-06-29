class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        stack<char> st;
        for(int i = 0;i < len;i++){
            char c = s[i];
            int top;
            if(st.empty()){
                st.push(c);
                continue;
            }else{
                top = st.top();
            }
            if(c == '{' || c == '[' || c == '('){
                st.push(c);
                continue;
            }

            switch(c){
                case '}':
                if(top == '{'){
                    st.pop();
                    continue;
                }else{
                    return false;
                }
                break;
                case ']':
                 if(top == '['){
                    st.pop();
                    continue;
                }else{
                    return false;
                }
                break;
                case ')':
                 if(top == '('){
                    st.pop();
                    continue;
                }else{
                    return false;
                }
                break;
            }
        }
        if(st.size() != 0){
            return false;
        }
        return true;
    }
};
