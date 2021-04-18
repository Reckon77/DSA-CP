 string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int> m1;
        for(int i=0;i<n;i++){
            m1[arr[i]]++;
        }
        int flar,slar;
        string s1,s2;
        flar=slar=INT_MIN;
        for(auto itr=m1.begin();itr!=m1.end();itr++){
            if(itr->second>flar){
                slar=flar;
                s2=s1;
                s1=itr->first;
                flar=itr->second;
            }else if(itr->second>slar){
                slar=itr->second;
                s2=itr->first;
            }
        }
        return s2;
    }
