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
        ListNode *curr1=list1;
        //ListNode *curr2=list2;
        ListNode *Node;
        while(list2!=nullptr){
            Node=list2;
            list2=list2->next;
            curr1=list1;
            int pos=0;
            while(curr1!=nullptr){
                if(curr1->val>Node->val){
                    break;
                }
                else{
                    curr1=curr1->next;
                    pos++;
                }
            }
            curr1=list1;
            if(pos==0){
                Node->next=list1;
                list1=Node;
            }else{
                for(int i=0;i<pos-1;i++){
                curr1=curr1->next;
            }
            Node->next=curr1->next;
            curr1->next=Node;
            }
        }
        return list1;
    }
};