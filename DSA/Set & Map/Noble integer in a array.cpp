//https://www.geeksforgeeks.org/noble-integers-in-an-array-count-of-greater-elements-is-equal-to-value/
int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++){
        if(A[i]==A[i+1]){
            continue;
        }
        if(A.size()-i-1==A[i]){
            return 1;
        }
    }
    return -1;
}

