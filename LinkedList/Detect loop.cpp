bool detectLoop(Node* head)
{
    // your code here
    Node *slow, *fast;
    slow = fast = head;
    
    while(slow && fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
        
        if(slow == fast)
            return true;
    }
    return false;
}
