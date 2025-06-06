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
    ListNode * head=new ListNode(-1);
    ListNode * current=head;
    int sum=0;
    int carry=0;
    while(l1!=nullptr || l2 != nullptr){
        sum=carry;
        if(l1){
            sum+=l1 -> val;
            l1=l1 -> next;
        }
        if(l2){
            sum += l2 -> val;
            l2 = l2 -> next;
        }
        current -> next = new ListNode(sum % 10);
        current = current -> next;
        carry =sum / 10;
        if(carry){
            current -> next=new ListNode(carry);
        }
    }
    return head -> next;
    }
};