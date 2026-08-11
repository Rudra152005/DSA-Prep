class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string res = "";
        for(char ch : num){
            while(!st.empty() && k > 0 && st.top() > ch){
                st.pop();
                k--;
            }
            st.push(ch);
        }
        while(k > 0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        int i = 0;
        while(i < res.size() && res[i] == '0'){
            i++;
        }
        res = res.substr(i);
        if(res == ""){
            return "0";
        }
        return res;

    }
};