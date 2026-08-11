class Solution {
public:
    string build(string s){
        stack<char> st;
        for(char ch : s){
            if(ch == '#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(ch);
            }
        }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
        
    }
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};