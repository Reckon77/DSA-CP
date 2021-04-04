//https://practice.geeksforgeeks.org/problems/how-many-xs4514/1/?page=1&category[]=Modular%20Arithmetic&query=page1category[]Modular%20Arithmetic
int countX(int L, int R, int X) {
        // code here
        int ans=0;
        for(int i=L+1;i<R;i++){
            int x=i;
            while(x){
                int rem=x%10;
                if(rem==X){
                    ans++;
                }
                x=x/10;
            }
        }
        return ans;
    }
