//                                      Date:- 8 May, 2022


//                                        Linked List 

// Reverse Linked List

// Using recursion



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


/*

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = head;
        if(p == NULL || p->next == NULL){     //(or)  if(!p || !(p->next)) {
            return head;
        }
        ListNode* temp =  reverseList(p->next);
        p->next->next = p;
        p->next = NULL;
        return temp;
    }
};

*/

// -----------------------------------------------------------------


