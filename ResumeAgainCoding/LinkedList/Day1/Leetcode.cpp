//                                      Date:- 5 May, 2022

//                                      Linked List


// Problem:-  Intersection of two linked list



//                                      Brute force
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