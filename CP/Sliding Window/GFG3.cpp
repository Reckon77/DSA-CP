//https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1/
int search(string pat, string txt) {
	    // code here
	    int i=0,j=0,ans=0;
	    unordered_map<char,int>m1;
	    int n=txt.length(),k=pat.length();
	    for(int i=0;i<k;i++){
	        m1[pat[i]]++;
	    }
	    int count=m1.size();
	    while(j<n){
	        if(m1.find(txt[j])!=m1.end()){
	            m1[txt[j]]--;
	            if(m1[txt[j]]==0){
	                count--;
	            }
	        }
	        if(j-i+1<k){
	            j++;
	        }else if(j-i+1==k){
	            if(count==0){
	                ans++;
	            }
	            if(m1.find(txt[i])!=m1.end()){
	                if(m1[txt[i]]==0){
	                    count++;
	                }
	                m1[txt[i]]++;
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}

