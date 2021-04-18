//https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1/
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        list<long long int> l1;
        vector<long long>ans;
        long long int i=0,j=0;
        while(j<N){
            if(A[j]<0){
                l1.push_back(A[j]);
            }
            if(j-i+1<K){
                j++;
            }else if(j-i+1==K){
               if(l1.size()!=0){
                   ans.push_back(l1.front());
               }else{
                   ans.push_back(0);
               }
               j++;
               if(A[i]==l1.front()){
                   l1.pop_front();
               }
               i++;
            }
        }
        return ans;
        
        
                                                 
 }
