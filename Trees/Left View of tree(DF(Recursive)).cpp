//Function to return a list containing elements of left view of the binary tree.
void recursion(Node *root, int level, vector<int> &vec){
    
    if(root == NULL) 
      return;

    //If Vector contains number of elements is equal to level(Each Level will have only one element)
    if(level == vec.size()) 
      vec.push_back(root->data);

    //Each time call recursively for left and right child with increasing levels(Each Level will have only one element) and the vector
    recursion(root->left, level+1, vec);
    recursion(root->right, level+1, vec);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> vec;
   
   recursion(root,0,vec);
   
   return vec;
}
