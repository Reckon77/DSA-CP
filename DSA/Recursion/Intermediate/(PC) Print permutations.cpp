//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
//https://www.youtube.com/watch?v=jUo0Qis4FKU&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=44
void permutations(vector<string>&ans,string ip, string op) {
    	    if (ip.size() == 0) {
		        ans.push_back(op);
		        return;
	        }
	        for (int i = 0; i < ip.size(); i++) {
		        char ch = ip[i];
		        string ip1 = ip.substr(0, i) + ip.substr(i + 1);
	    	    permutations(ans,ip1, op + ch);
	        }
        }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    string op="";
		    vector<string>ans;
		    permutations(ans,S,op);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
