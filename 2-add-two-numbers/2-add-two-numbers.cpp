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
        ListNode* node = new ListNode();
        ListNode* head = node;
        int carry=0;
        while(l1!=NULL and l2!=NULL)
        {
            if(l1->val+l2->val+carry>=10)
            {
                ListNode* temp = new ListNode((l1->val+l2->val+carry)%10);
                head->next=temp;
                head=head->next;
                carry=1;
            }
            else
            {
                ListNode* temp = new ListNode((l1->val+l2->val+carry)%10);
                head->next=temp;
                head=head->next;
                carry=0;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            if(l1->val+carry>=10)
            {
                ListNode* temp = new ListNode((l1->val+carry)%10);
                head->next=temp;
                head=head->next;
                carry=1;
                l1=l1->next;
            }
            else
            {
                ListNode* temp = new ListNode(l1->val+carry);
                head->next=temp;
                head=head->next;
                carry=0;
                l1=l1->next;
            }
        }
        while(l2!=NULL)
        {
            if(l2->val+carry>=10)
            {
                ListNode* temp = new ListNode((l2->val+carry)%10);
                head->next=temp;
                head=head->next;
                carry=1;
                l2=l2->next;
            }
            else
            {
                ListNode* temp = new ListNode(l2->val+carry);
                head->next=temp;
                head=head->next;
                carry=0;
                l2=l2->next;
            }
        }
        if(carry)
        {
            ListNode* temp = new ListNode(carry);
            head->next=temp;
            head=head->next;
        }
        return node->next;
    }
};