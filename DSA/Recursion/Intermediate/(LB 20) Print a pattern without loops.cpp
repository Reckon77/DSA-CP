 //https://practice.geeksforgeeks.org/problems/print-pattern3549/1
 //My solution
 void pattern1(vector<int>&ans,int n){
        if(n<=0){
            ans.push_back(n);
            return;
        }
        ans.push_back(n);
        pattern1(ans,n-5);
    }
    void pattern2(vector<int>&ans,int n,int rn){
        if(n>=rn){
            ans.push_back(n);
            return;
        }
        ans.push_back(n);
        pattern2(ans,n+5,rn);
    }
    vector<int> pattern(int N){
        // code here
        vector<int>ans;
        pattern1(ans,N);
        pattern2(ans,ans[ans.size()-1]+5,N);
        return ans;
    }
//Best solution
void print(int N)
{
	if (N > 0)
	{
		cout << N << " ";
		print(N - 5);
	}
	cout << N << " ";
}
