//Function to return a list containing elements of traversal of the binary tree in level order
vector<int> leftView(Node *root)
{
   if(root==NULL) 
    return v;

   // Create a queue push root in to it
   queue<Node*>q;
   q.push(root);

   //go through thge elements untill queue is having any element
   while(!q.empty()){

       // take the cvurrent size of queue this will give the breadth of perticular level in tree and then traverse the queue
       int size = q.size();

       // Go get the fisrt elemnt of queue print it and remove it and push the left and right of the
        //first element each time (so at a time queue will have elements of perticular level)
       for(int i=0;i<size;i++){
           
           Node *curr = q.front();
           q.pop();
           cout<<curr->data<<" ";
           if(curr->left!=NULL) 
              q.push(curr->left);
           if(curr->right!=NULL) 
              q.push(curr->right);
            
       }
       cout<<"\n";
   }
   
}
