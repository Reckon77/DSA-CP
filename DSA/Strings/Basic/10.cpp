//Check	whether	the	String	is	a	palindrome	or	not.
int isPlaindrome(string S)
	{
	    // Your code goes here
	    int i=0,j=S.length()-1;
	    while(i<=j){
	        if(S[i++]!=S[j--]){
	            return 0;
	        }
	    }
	    return 1;
	}
