void kthLevel(struct Node *root, int k, vector<int> &v){
       if(root == NULL|| k < 0 ) 
        return; 
       if( k == 0 ) 
       { 
         v.push_back(root->data);
         return;
        } 
     
        kthLevel( root->left, k - 1 , v) ; 
        kthLevel( root->right, k - 1 , v) ; 
    }
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
      vector<int>v;
      kthLevel(root,k,v);
      return v;
    }
