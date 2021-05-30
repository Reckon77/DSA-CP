//Reverse a string
//https://www.geeksforgeeks.org/reverse-a-string-using-recursion/
void reverse(string &s) {
	if (s.length() == 0) {
		return;
	}
	char x = s[0];
	s.erase(0, 1);
	reverse(s);
	s.push_back(x);

}
