class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n<=1)
            return false;
        
        stack<char> st;
        
        for(auto &i:s) {
            if(i=='('
               || i=='{'
               || i=='[') {
                st.push(i);
            } else {
                if(st.empty()
                   || (i==')' && st.top()!='(')
                   || (i=='}' && st.top()!='{')
                   || (i==']' && st.top()!='['))
                   return false;
                
                st.pop();
            }
        }
        
        return st.empty();
   }
};