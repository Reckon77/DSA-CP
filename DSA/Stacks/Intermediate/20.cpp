//https://www.youtube.com/watch?v=-n_CsIL3Ts4
//https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1
int countRev (string s)
{
    // your code here
    if(s.length()%2!=0){
        return -1;
    }
    stack<char>st;
    int c,c2;
    c=c2=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{'){
            c++;
            st.push('{');
        }else if(!st.empty()&&st.top()=='{'){
            st.pop();
            c--;
        }else{
            c2++;
        }
    }
    c=ceil((float)c/2);
    c2=ceil((float)c2/2);
    return c+c2;
}
