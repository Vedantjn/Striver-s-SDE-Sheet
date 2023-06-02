class Solution {
public:
    Node* removeNthFromEnd(Node* head, int n) {
        Node * dummy = new Node();
        dummy -> next = head;
        Node* fast = dummy;
        Node* slow = dummy;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return dummy->next;
    }
};