//try with recursion
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int>s;
    int n=q.size();
    while(n--){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;
}
