int minFlips (string S)
{
    // your code here
    int ans1=0,ans2=0;
    for(int i=0;i<S.length();i++){
        if((i%2==0&&S[i]!='0')||(i%2!=0&&S[i]!='1')){
            ans1++;
        }
        if((i%2==0&&S[i]!='1')||(i%2!=0&&S[i]!='0')){
            ans2++;
        }
    }
    
	return min(ans1,ans2);
}
