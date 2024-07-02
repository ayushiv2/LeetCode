class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode();
        ListNode* temp=head; 
        int carry=0;
        while(l1!=0 || l2!=0 || carry!=0){
            int x=l1? l1 ->val:0;
            int y=l2? l2 ->val:0; 
            int sum=carry+x+y;
            carry=sum/10; 
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            l1= l1?l1->next:nullptr;
            l2= l2?l2->next:nullptr;
        }
        return head->next;
    }
};
