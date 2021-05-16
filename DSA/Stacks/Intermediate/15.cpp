 //https://www.geeksforgeeks.org/length-of-the-longest-valid-substring/
 //Interesting solution
 int findMaxLen(string s) {
        // code here
        stack<int>st;
        st.push(-1);
       int res=0;
       for(int i=0;i<s.length();i++){
           if(s[i]=='('){
               st.push(i);
           }else{
               st.pop();
               if(!st.empty()){
                   res=max(i-st.top(),res);
               }else{
                   st.push(i);
               }
           }
       }
       return res;
       
    }
