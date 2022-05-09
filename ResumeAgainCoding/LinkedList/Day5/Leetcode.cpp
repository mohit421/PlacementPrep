//                                      Date:- 9 May, 2022


//                                        Linked List 


// -----------------------------------

// Remove Linked List Elements
/*
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]

Input: head = [], val = 1
Output: []

Input: head = [7,7,7,7], val = 7
Output: []
*/



// Code SOlution


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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr){
            return nullptr;
        }
        while(head != nullptr && head->val == val){
            head = head->next;
        }
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp!=nullptr){
            if(temp->val == val){
                prev->next = temp->next;
            }
            else{
                prev = temp;
            }
            temp = temp->next;
        }
        return head;
    }
};

*/