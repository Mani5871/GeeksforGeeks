struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    Node *curr = head, *next = NULL, *prev = NULL;
    
    while(curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    
    return head;
}
