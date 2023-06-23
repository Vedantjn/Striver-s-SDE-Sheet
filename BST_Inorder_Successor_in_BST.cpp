Node* inorderSuccessor(Node* root, Node* p){
    Node* succ = NULL;

    while(root != NULL){
        if(root->val <= p->val){
            root = root->right;
        }
        else{
            succ = root;
            root = root->left;
        }
    }
    return root;
}