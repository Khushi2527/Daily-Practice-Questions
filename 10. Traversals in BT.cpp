//******** PreOrder traversal ********//
    void preOrder(Node *root) {
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);

    }


//******** PostOrder traversal ********//
    void postOrder(Node *root) {
        if(root==NULL) return;
        
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";

    }


//******** InOrder traversal ********//
    void inOrder(Node *root) {
        if(root==NULL) return;
        
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);

    }
