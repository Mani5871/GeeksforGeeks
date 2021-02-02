Node* reverse(Node *head, int n)
{
    int i;
    Node *curr, *prev = NULL, *temp = NULL;
    
    for(i = 1, curr = head; i <= n; i ++)
    {
        temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
    return head;
}


bool isPalindrome(Node *head)
{
    //Your code here
    if(head == NULL || head -> next == NULL)
        return true;
    
    int cnt = 0;
    
    for(Node *temp = head; temp != NULL; temp = temp -> next)
        cnt ++;
    
    int i = 1;
    Node *temp;
    
    for(temp = head; i <= cnt / 2; i ++, temp = temp -> next);
    
    if(cnt % 2)
        temp = temp -> next;
    //cout << temp -> data << endl;
    
    head = reverse(head, cnt / 2);
    
    while(temp != NULL && head != NULL)
    {
        if(temp -> data != head -> data)
            return false;
        temp = temp -> next;
        head = head -> next;
    }
    return true;
}
