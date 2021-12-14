//https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1/
Node *sortedMerge(Node *head1, Node *head2)
{
    // code here
    Node *p = head1;
    Node *q = head2;
    Node *head3 = NULL, *last;

    while (p && q)
    {
        int data;
        if (p->data < q->data)
        {
            data = p->data;
            p = p->next;
        }
        else if (q->data < p->data)
        {
            data = q->data;
            q = q->next;
        }
        else
        {
            data = p->data;
            if (!head3)
            {
                Node *t = new Node(data);
                head3 = t;
                last = t;
                t = new Node(data);
                last->next = t;
                last = t;
            }
            else
            {
                Node *t = new Node(data);
                last->next = t;
                last = t;
                t = new Node(data);
                last->next = t;
                last = t;
            }

            p = p->next;
            q = q->next;
            continue;
        }
        if (!head3)
        {
            Node *t = new Node(data);
            head3 = t;
            last = t;
        }
        else
        {
            Node *t = new Node(data);
            last->next = t;
            last = t;
        }
    }
    while (p)
    {
        int data = p->data;
        if (!head3)
        {
            Node *t = new Node(data);
            head3 = t;
            last = t;
        }
        else
        {
            Node *t = new Node(data);
            last->next = t;
            last = t;
        }
        p = p->next;
    }
    while (q)
    {
        int data = q->data;
        if (!head3)
        {
            Node *t = new Node(data);
            head3 = t;
            last = t;
        }
        else
        {
            Node *t = new Node(data);
            last->next = t;
            last = t;
        }
        q = q->next;
    }
    return head3;
}