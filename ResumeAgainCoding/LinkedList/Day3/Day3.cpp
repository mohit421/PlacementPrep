//                                  Date:- 7 May,2022


//                                      Linked List


// Two Pointer Algorithm


//                                     Leetcode Problem

//                                      Revision

// Problem 1:- Linked List Cycle [https://leetcode.com/explore/learn/card/linked-list/214/two-pointer-technique/1212/]

/*
We can do it using :-
1. Hash Table 
2. Floyd's Cycle-Finding Algorithm
3. Give head->value = some number and check it come again in the list or not



// Method 1:- 
//Time complexity: O(n)
//Space complexity: O(1)


// Floyd’s Cycle-Finding Algorithm // fast slow approach // 2 pointers // "tortoise and the hare algorithm"

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
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
            
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        
        while(fastPtr != NULL && fastPtr->next != NULL){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if(slowPtr == fastPtr)
                return true;
        }
        return false;
    }
};

*/


// Method - 2

//Using hashing
//Here we will chech if the node we have visisted is present or not if we have visited it then it mean there is cycle.

//Time complexity: O(n)
//Space complexity: O(n)

/*
class Solution {
public:
    unordered_map<ListNode*,int> mp;
    bool hasCycle(ListNode *head) {
        while(head!=NULL){
            if(mp.find(head) == mp.end()){
                mp[head]++;
            }
            else{
                return true;
            }
            head=head->next;
        }
        return false;
    }
};

*/






// Method 3

//One easy methos is to modify the values of the linked list to tha value which is not in the range.
//When you encounter this value again then there is loop

//Time complexity: O(n)
//Space complexity: O(1)

/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        while(head){
            if(head->val==1000000){
                return true;
            }
            head->val=1000000;
            head=head->next;
        }
        return false;
    }
};


*/





// ----------------------------------------------------



// Linked List Cycle II



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
        if(fastPtr==NULL && fastPtr->next== NULL) return NULL; //  if(!(fastPtr && fastPtr->next)) return NULL; 
        while(head != slowPtr){
            head = head->next;
            slowPtr = slowPtr->next;
        }
        return head;
    }
};
*/


// ------------------------------------------------------


// Problem 3:- Insersection of two Linked List

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        if(tempA == nullptr || tempB == nullptr){
            return nullptr;
        }
        int sizeA=0,sizeB=0;
        while(tempA != nullptr){
            sizeA++;
            tempA = tempA->next;
        }
        while(tempB != nullptr){
            sizeB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        if(sizeA>sizeB){
            while(sizeA-- > sizeB){
                tempA = tempA->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{
            while(sizeB-- >sizeA){
                tempB = tempB->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        return nullptr;
    }
};
*/


