Node* LCA(Node* root, Node* p, Node* q){
    while(root){
        if(root->data > p->data && root->data > q->data)
            root = root->left;
        if(root->data < p->data && root->data < q->data)
            root = root->right;
        
        return root;
    }
}