 //https://practice.geeksforgeeks.org/problems/maximum-difference/1
 int findMaxDiff(int A[], int n)
    {
      //Your code here
      stack<int>st;
      vector<int>ls,rs;
      for(int i=0;i<n;i++){
          while(!st.empty()&&st.top()>=A[i]){
              st.pop();
          }
          if(st.empty()){
              ls.push_back(0);
          }else{
              ls.push_back(st.top());
          }
          st.push(A[i]);
      }
      while(!st.empty()){
          st.pop();
      }
      for(int i=n-1;i>=0;i--){
          while(!st.empty()&&st.top()>=A[i]){
              st.pop();
          }
           if(st.empty()){
              rs.push_back(0);
          }else{
              rs.push_back(st.top());
          }
          st.push(A[i]);
      }
      reverse(rs.begin(),rs.end());
      int ans=INT_MIN;
      for(int i=0;i<n;i++){
          ans=max(ans,abs(rs[i]-ls[i]));
      }
      return ans;
    }
