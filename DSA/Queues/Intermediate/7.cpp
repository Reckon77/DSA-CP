queue<int> modifyQueue(queue<int> q, int k)
{
    //add code here.
    int n=q.size()-k;
    stack<int>s1;
    for(int i=0;i<k;i++){
        s1.push(q.front());
        q.pop();
    }
    while(!s1.empty()){
        q.push(s1.top());
        s1.pop();
    }
    while(n--){
        q.push(q.front());
        q.pop();
    }
    return q;
    
}
