//Function to convert binary tree to doubly linked list and return it
    
Node* head, *prev;
Node* BTtoDLL(Node* root)
{
    if(root==null) return null;
        
    BTtoDLL(root->left);
	 
	if(prev==null){
	    head=root;
	    prev=root; 
	}
	else
	{
	    prev->right=root;
	    root->left=prev;
	    prev=root;
	}

	BTtoDLL(root->right);
        return head;
}
