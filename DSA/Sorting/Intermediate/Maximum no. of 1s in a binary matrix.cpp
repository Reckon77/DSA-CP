 //Maximum no. of 1s in a binary matrix
 //https://practice.geeksforgeeks.org/problems/maximum-no-of-1s-row3027/1/
 int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int ans=INT_MAX,currentfo=INT_MAX;
            for(int i=0;i<N;i++){
                int fo=-1;
                int l=0,h=M-1;
                while(l<=h){
                    int mid=(l+h)/2;
                    if(Mat[i][mid]==1){
                        fo=mid;
                        h=mid-1;
                    }else{
                        l=mid+1;
                    }
                }
                if(fo!=-1&&fo<currentfo){
                    ans=i;
                    currentfo=fo;
                }
            }
            return ans;
        }
