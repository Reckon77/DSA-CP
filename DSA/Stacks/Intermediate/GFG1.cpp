//Evaluation of postfix expression
//https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1/
int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
        for(int i=0;i<S.length();i++){
            if(isoperand(S[i])){
                st.push((int)S[i]-48);
            }else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c;
                if(S[i]=='+'){
                    c=b+a;
                }else if(S[i]=='-'){
                    c=b-a;
                }else if(S[i]=='*'){
                    c=b*a;
                }else{
                    c=b/a;
                }
                st.push(c);
            }
        }
        return st.top();
        
    }
    bool isoperand(char c){
        if(c>='0'&&c<='9')return true;
        return false;
    }
