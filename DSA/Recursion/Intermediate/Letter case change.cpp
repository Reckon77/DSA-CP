//https://leetcode.com/problems/letter-case-permutation/submissions/
class Solution {
public:
    bool check(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))return true;
	return false;
}
char trans(char c) {
	char x;
	if (c >= 'a' && c <= 'z') {
		x = toupper(c);
	} else {
		x = tolower(c);
	}
	return x;
}
void solve(vector<string>&ans,string ip, string op) {
	if (ip.length() == 0) {
        ans.push_back(op);
		return;
	}
	if (check(ip[0])) {
		string op1 = op;
		string op2 = op;
		op1.push_back(ip[0]);
		op2.push_back(trans(ip[0]));
		ip.erase(0, 1);
		solve(ans,ip, op1);
		solve(ans,ip, op2);
	} else {
		string op1 = op;
		op1.push_back(ip[0]);
		ip.erase(0, 1);
		solve(ans,ip, op1);
	}

}
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string op={""};
        solve(ans,s,op);
        return ans;
    }
};
