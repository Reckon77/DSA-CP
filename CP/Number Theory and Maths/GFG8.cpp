 //https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
 //https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/
 long long gcd(long long x,long long y){
        if(y==0)return x;
        else
            return gcd(y,x%y);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long>ans;
        long long g=gcd(A,B);
        long long lcm=(A*B)/g;
        ans.push_back(lcm);
        ans.push_back(g);
        return ans;
    }
