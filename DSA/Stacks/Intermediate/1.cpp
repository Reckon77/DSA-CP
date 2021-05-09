//https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1
void QueueStack :: push(int x)
{
        // Your Code
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
         while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code  
        if(q1.empty()){
            return -1;
        }else{
            int x=q1.front();
            q1.pop();
            return x;
            
        }
}
