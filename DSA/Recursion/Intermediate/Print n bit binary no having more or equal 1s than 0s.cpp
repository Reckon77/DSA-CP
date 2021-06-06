//https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1
void generate(vector<string>&ans,string ip,int o,int z,int n){
        if(o+z==n){
            ans.push_back(ip);
            return;
        }
        generate(ans,ip+'1',o+1,z,n);
        if(z<o){
        generate(ans,ip+'0',o,z+1,n);
        }
        
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string>ans;
	    string ip={""};
	    generate(ans,ip,0,0,N);
	    return ans;
	}
