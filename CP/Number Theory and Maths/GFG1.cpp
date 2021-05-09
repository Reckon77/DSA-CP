//https://www.geeksforgeeks.org/primality-test-set-1-introduction-and-school-method/
//https://practice.geeksforgeeks.org/problems/prime-number2314/1
 int isPrime(int N){
        // code here
        if(N==0||N==1)
        return 0;
        for(int i=2;i*i<=N;i++){
            if(N%i==0)return 0;
        }
        return 1;
    }
    
