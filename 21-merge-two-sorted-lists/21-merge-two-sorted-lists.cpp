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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list=new ListNode();
        ListNode* cur=list;
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                ListNode* temp=new ListNode(list1->val);
                cur->next=temp;
                cur=cur->next;
                list1=list1->next;
            }
            else
            {
                ListNode* temp=new ListNode(list2->val);
                cur->next=temp;
                cur=cur->next;
                list2=list2->next;
            }
        }
        while(list1!=NULL)
        {
            ListNode* temp=new ListNode(list1->val);
            cur->next=temp;
            cur=cur->next;
            list1=list1->next;
        }
        while(list2!=NULL)
        {
            ListNode* temp=new ListNode(list2->val);
            cur->next=temp;
            cur=cur->next;
            list2=list2->next;
        }
        return list->next;
    }
};