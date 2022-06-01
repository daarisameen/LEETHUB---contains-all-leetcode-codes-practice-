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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        // 
        int k=size-n+1;
        cout<<size<<" "<<k;
        temp=head;
        ListNode* cur=temp;
        int siz=1;
        if(size==1)
            return NULL;
        if(n==size)
            return head->next;
        while(temp!=NULL)
        {
            siz++;
            if(siz==k)
            {
               if(n!=1)
               {
                   temp->next=temp->next->next;
                   temp=temp->next;
               }
                else
                {
                    temp->next=NULL;
                }
            }
            else
                temp=temp->next;
        }
        // return head;
        return cur;
    }
};