	//https://www.youtube.com/watch?v=Jkx1vP3ZkK0&t=140s
	string FirstNonRepeating(string A){
		    // Code here
		    vector<int>vis(26,0);
		    string ans;
		   queue<char>q;
		   for(int i=0;i<A.length();i++){
		       q.push(A[i]);
		       vis[A[i]-'a']++;
		       while(!q.empty()){
		           if(vis[q.front()-'a']>1){
		               q.pop();
		           }else{
		               ans.push_back(q.front());
		               break;
		           }
		       }
		       if(q.empty()){
		           ans.push_back('#');
		       }
		   }
		    return ans;
		}
