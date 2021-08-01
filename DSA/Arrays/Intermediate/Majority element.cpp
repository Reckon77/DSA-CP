//https://www.youtube.com/watch?v=X0G5jEcvroo
//https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
int majorityElement(int a[], int size)
    {
        
        // your code here
        int count=0,candidate=0;
        for(int i=0;i<size;i++){
            if(count==0){
                candidate=a[i];
            }
            if(candidate==a[i]){
                count++;
            }else{
                count--;
            }
        }
        int cnt=0;
        for(int i=0;i<size;i++){
            if(a[i]==candidate){
                cnt++;
            }
        }
        if(cnt>size/2){
            return candidate;
        }else{
            return -1;
        }
        
    }
