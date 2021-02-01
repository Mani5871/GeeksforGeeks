void deleteNode(Node *node)
{
   // Your code here
   while(node -> next != NULL)
   {
       node -> data = node -> next -> data;
       if(node -> next -> next == NULL)
       {
           node -> next = NULL;
           break;
       }
       node = node -> next;
   }
   node = NULL;
}
