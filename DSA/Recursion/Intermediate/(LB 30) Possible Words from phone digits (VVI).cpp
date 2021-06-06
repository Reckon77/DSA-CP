 //https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1#
 void generate(vector<string>&ans, string ip, string op, string num, unordered_map<int, string>&m1) {
	if (ip.size() == 0) {
		ans.push_back(op);
		return;
	}
	string op1, op2, op3, op4;
	op1 = op2 = op3 = op;
	op1.push_back(ip[0]);
	op2.push_back(m1[(int)num[0] - 48][1]);
	op3.push_back(m1[(int)num[0] - 48][2]);
	bool flag = false;
	if (num[0] == '7' || num[0] == '9') {
		op4 = op;
		op4.push_back(m1[(int)num[0] - 48][3]);
		flag = true;
	}
	ip.erase(0, 1);
	num.erase(0, 1);
	generate(ans, ip, op1, num, m1);
	generate(ans, ip, op2, num, m1);
	generate(ans, ip, op3, num, m1);
	if (flag) {
		generate(ans, ip, op4, num, m1);
	}

}
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>ans;
        unordered_map<int, string>m1;
	m1[2] = "abc";
	m1[3] = "def";
	m1[4] = "ghi";
	m1[5] = "jkl";
	m1[6] = "mno";
	m1[7] = "pqrs";
	m1[8] = "tuv";
	m1[9] = "wxyz";
	string num;
	for(int i=0;i<N;i++){
	    string s=to_string(a[i]);
	    num.push_back(s[0]);
	}
	string ip, op = {""};
	for (int i = 0; i < num.size(); i++) {
		ip.push_back(m1[(int)num[i] - 48][0]);
	}
	generate(ans, ip, op, num, m1);
	return ans;
    }
