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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        ListNode* temp=head;
            if(head->val==val)
                head=head->next;
            
            ListNode* cur=temp;
            ListNode* ans=new ListNode();
            ListNode* real=ans;
            while(temp!=NULL)
            {
                if(temp->val==val)
                {

                while(temp!=NULL)
                {
                    if(temp->val!=val)
                    {
                        break;
                    }
                    temp=temp->next;
                }
                }
                ans->next=temp;
                ans=ans->next;
                if(temp==NULL)
                    break;
                temp=temp->next;
            }
        // if(cur->val==val)
        // {
        //     while(cur!=NULL)
        //     {
        //         if(cur->val!=val)
        //             return cur;
        //         cur=cur->next;
        //     }
        //     return NULL;
        // }
            return real->next;
    }
};