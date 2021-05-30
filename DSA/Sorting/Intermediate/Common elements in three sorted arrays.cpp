 //https://practice.geeksforgeeks.org/problems/common-elements1132/1/
 //Union of three sets
 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>v1,v2;
            int i,j;
            i=j=0;
            while(i<n1&&j<n2){
                if(A[i]>B[j]){
                    j++;
                }else if(A[i]<B[j]){
                    i++;
                }else{
                    v1.push_back(A[i]);
                    i++;
                    j++;
                }
            }
            i=j=0;
            while(i<v1.size()&&j<n3){
                if(v1[i]>C[j]){
                    j++;
                }else if(v1[i]<C[j]){
                    i++;
                }else{
                    v2.push_back(v1[i]);
                    i++;
                    j++;
                }
            }
            i=0;
            if(v2.size()==0){
                v2.push_back(-1);
                return v2;
            }else if(v2.size()==1){
                return v2;
            }
            for(int j=0;j<v2.size()-1;j++){
                if(v2[j]!=v2[j+1]){
                    v2[i++]=v2[j];
                }
            }
            v2[i++]=v2[v2.size()-1];
            v2.resize(i);
            return v2;
        }
