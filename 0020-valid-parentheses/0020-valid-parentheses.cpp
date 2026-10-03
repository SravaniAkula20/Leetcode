class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2==1)return false;
        stack<char>st;
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty())return false;
                if(ch==')'&&st.top()!='(')return false;

                else if(ch=='}'&&st.top()!='{')return false;

                else if(ch==']'&&st.top()!='[')return false;
                else{
                    st.pop();
                }
            }
        }
        if(!st.empty())return false;
        return true;
    }
};