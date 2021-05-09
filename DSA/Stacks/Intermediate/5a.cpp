 //https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1#
 //Infix to postfix
 string infixToPostfix(string s)
    {
        // Your code here
        string ans;
        s.push_back(')');
        stack<char>st;
        st.push('(');
        for(int i=0;i<s.length();i++){
            if(isoperand(s[i])){
                ans.push_back(s[i]);
            }else if(s[i]=='('){
                st.push('(');
            }else if(s[i]==')'){
                while(st.top()!='('){
                    ans.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }else{
                if(prec(s[i])>prec(st.top())){
                    st.push(s[i]);
                }else{
                    while((prec(s[i])<=st.top())&&st.top()!='('){
                        ans.push_back(st.top());
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
        }
        return ans;
    }
    bool isoperand(char c){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))return true;
        return false;
    }
    int prec(char c){
        if(c=='+'||c=='-'){
            return 1;
        }else if(c=='*'||c=='/'){
            return 2;
        }else if(c=='^'){
            return 3;
        }else{
            return -1;
        }
    }
