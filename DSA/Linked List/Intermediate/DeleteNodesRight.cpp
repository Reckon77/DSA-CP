//https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1/
Node *reverseList(Node *head)
{
    // code here
    // return head of reversed list
    Node *p = head, *q = NULL, *r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
    return head;
}
Node *compute(Node *head)
{
    // your code goes here
    if (!head || !head->next)
    {
        return head;
    }
    head = reverseList(head);
    int mx = head->data;
    Node *p = head->next, *q = head;
    while (p)
    {
        if (p->data < mx)
        {
            q->next = p->next;
            p = p->next;
        }
        else
        {
            mx = max(mx, p->data);
            q = p;
            p = p->next;
        }
    }
    head = reverseList(head);
    return head;
}