int getNthFromLast(Node *head, int n)
{
       // Your code here
       int cnt = 0;
       Node * temp = head;
       while(temp != NULL)
       {
           temp = temp -> next;
           cnt ++;
           
       }
       if(n > cnt)
            return -1;
        
        int counter, i = 1;
        counter = cnt  - n + 1;
        
        temp = head;
        //cout << counter << " ";
        while(i < counter)
        {
            temp = temp -> next;
            i ++;
            //cout << counter << " ";
        }
        return temp -> data;
        
}

