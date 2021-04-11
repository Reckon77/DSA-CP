 //Write	a	program	to	check	whether	given	two	strings	are	anagram	or	
//not.
 bool isAnagram(string a, string b){
        
        // Your code here
        if(a.length()!=b.length()){
        return false;
    }
    unordered_map<char,int>m1;
    for(int i=0;i<a.length();i++){
        m1[a[i]]++;
    }
     for(int i=0;i<b.length();i++){
        m1[b[i]]--;
    }
    for(auto&a:m1){
        if(a.second!=0){
            return false;
        }
    }
    return true;
        
    }
