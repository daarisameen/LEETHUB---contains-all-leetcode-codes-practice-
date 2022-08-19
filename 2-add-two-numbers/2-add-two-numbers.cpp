/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        int carry=0;
        while(l1!=NULL and l2!=NULL)
        {
            if(l1->val + l2->val + carry>=10)
            {
                head->next=new ListNode((l1->val + l2->val + carry)%10);
                carry=1;
            }
            else
            {
                head->next=new ListNode((l1->val + l2->val + carry)%10);
                carry=0;
            }
            l1=l1->next;
            l2=l2->next;
            head=head->next;
        }
        
        while(l1!=NULL)
        {
            if(l1->val + carry>=10)
            {
                head->next=new ListNode((l1->val + carry)%10);
                carry=1;
            }
            else
            {
                head->next=new ListNode((l1->val + carry)%10);
                carry=0;
            }
            l1=l1->next;
            head=head->next;
        }
        
        while(l2!=NULL)
        {
            if(l2->val + carry>=10)
            {
                head->next=new ListNode((l2->val + carry)%10);
                carry=1;
            }
            else
            {
                head->next=new ListNode((l2->val + carry)%10);
                carry=0;
            }
            l2=l2->next;
            head=head->next;
        }
        if(carry)
        {
            head->next=new ListNode(carry);
            head=head->next;
        }
        return temp->next;
    }
};