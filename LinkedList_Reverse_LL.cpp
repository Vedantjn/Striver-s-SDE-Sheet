Node* reverseusingLoop(Node* head ) {
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL ) {
                Node* temp = curr ->next;
                curr ->next = prev;
                prev = curr;
                curr = temp;
        }
        return prev;
}

Node* reverseRecursive(Node* &prev,Node* &curr){
    // Base case
    if(curr == NULL){
        return prev; // New head
    }
    // 1 case solve
    Node* forward = curr->next;
    curr->next = prev;
    // recursive call
    return reverseRecursive(curr,forward);
}