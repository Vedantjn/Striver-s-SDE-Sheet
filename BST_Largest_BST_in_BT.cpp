class NodeValue{
public:
    int maxNode, minNode, maxSize;

    NodeValue(int minNode, int maxNode, int maxSize){
        this->minNode = minNode;
        this->maxNode = maxNode;
        this->maxSize = maxSize;
    }
};

class Solution{
public:
    NodeValue largestBSTSubtreeHelper(Node* root){
        if(!root){
            return NodeValue(INT_MAX, INT_MIN, 0);
        }

        auto left = largestBSTSubtreeHelper(root->left);
        auto right = largestBSTSubtreeHelper(root->right);

        if(left.maxNode < root.val && root.val < right.minNode){
            return NodeValue(min(root->val, left.minNode), max(root->val, right.maxNode), left.maxSize + right.maxSize + 1);
        }
        
        return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
    }

public:
    int largestBSTSubtree(Node* root){
        return largestBSTSubtreeHelper(root).maxSize;
    }
};