void Mirror(Node* root){
    if(!root) 
        return;

    Mirror(root->left);
    Mirror(root->right);

    swap(root->left, root->right);
}

// TC: O(N)
// SC: O(H)

void Mirror(Node* root){
    if(!root)
        return;

    Mirror(root->left);
    Mirror(root->right);

    Node* temp;

    temp = root->left;
    root->right = root->left;
    root-right = temp;
}