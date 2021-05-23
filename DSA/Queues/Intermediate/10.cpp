 //https://www.youtube.com/watch?v=nTKdYm_5-ZY
 int tour(petrolPump p[],int n)
    {
       //Your code here
       int sum=0,diff=0,start=0;
       for(int i=0;i<n;i++){
           sum+=p[i].petrol-p[i].distance;
           if(sum<0){
               diff+=sum;
               start=i+1;
               sum=0;
           }
       }
       return sum+diff>0?start:-1;
    }
