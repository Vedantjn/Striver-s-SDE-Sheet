Node* inorderPredecessor(Node* root, Node* p){
    Node* pred = NULL;

    while(root != NULL){
        if(root->val <= p->val){
            pred = root;
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    return root;
}