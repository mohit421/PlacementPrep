//                                        Date:- 27 March, 2022

// Linked List II

/*

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        while(fastPtr != NULL && fastPtr->next != NULL){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if(slowPtr == fastPtr)
                break;
        }
        if(!(fastPtr && fastPtr->next)) return NULL; 
        while(head != slowPtr){
            head = head->next;
            slowPtr = slowPtr->next;
        }
        return head;
    }
};

*/


// Another solution

/*
{
        // Pointer's intialize at head of linkedlist
        ListNode slow = head;
        ListNode fast = head;
        
        while(fast != null && fast.next != null){ // running the loop until 
            slow = slow.next; // moving slow by 1
            fast = fast.next.next; // moving fast by 2
            if(slow == fast){ // if they meet
                slow = head; // reset slow to head
                while(slow != fast){ // run loop until again fast & slow don't collab
                    slow = slow.next; // moving slow by 1
                    fast = fast.next; // moving fast by 1 as well
                }
                return slow; // Or return fast same thing, they will return the tail where cycle starts
            }
        }
        return null; // if there is no cycle, it will return null


*/

