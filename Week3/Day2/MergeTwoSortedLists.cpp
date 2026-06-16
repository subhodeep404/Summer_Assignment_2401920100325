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
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* list3=list1;
        if(list2->val<list1->val){
            list3=list2;
            list2=list2->next;
        }
        else{
            list1=list1->next;
        }
        ListNode *temp=list3;
        while(list1 && list2){
            if(list2->val>list1->val){
                temp->next=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;
        }
        if(list1==NULL) temp->next=list2;
        else temp->next=list1;
        return list3;
    }
};