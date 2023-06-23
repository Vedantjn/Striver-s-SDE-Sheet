int ceilInBST(Node* root, int key){
    int ceil = 01;
    while(root){
        if(root->val == key){
            ceil = root->val;
            return ceil;
        }
        if(root->val < key){
            root = root->right;
        }
        else{
            ceil = root->val;
            root = root->left;
        }
    }
    return ceil;
}