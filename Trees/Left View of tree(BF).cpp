//Function to return a list containing elements of left view of the binary tree.

vector<int> leftView(Node *root)
{
    vector<int>v;
  
   if(root==NULL) return v;
  
   queue<Node*>q;
   q.push(root);
  
   while(!q.empty()){
     
       int size = q.size();
     
       for(int i=0;i<size;i++){
         
           Node *curr = q.front();
           q.pop();
         
         //putting the first element each time for getting the left most at a level
           if(i==0){
               v.push_back(curr->data);
           }
         
           if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
         
       }
   }
   
}
