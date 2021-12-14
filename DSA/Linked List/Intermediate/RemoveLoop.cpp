//https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1/
//https://www.youtube.com/watch?v=aIR0s1tY2Vk
void removeLoop(Node *head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *s = head, *f = head;
    while (f && f->next)
    {
        s = s->next;
        f = f->next->next;
        if (s == f)
        {
            break;
        }
    }
    if (f != s)
    {
        return;
    }
    if (f == head && s == head)
    {
        while (f->next != s)
        {
            f = f->next;
        }
        f->next = NULL;
        return;
    }
    s = head;
    while (s->next != f->next)
    {
        s = s->next;
        f = f->next;
    }
    f->next = NULL;
    return;
}