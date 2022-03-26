//https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1/
bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(!r1&&!r2){
            return true;
        }else if(!r1||!r2){
            return false;
        }
        if(r1->data!=r2->data)return false;
        bool lst=isIdentical(r1->left,r2->left);
        bool rst=isIdentical(r1->right,r2->right);
        return lst&&rst;
    }
