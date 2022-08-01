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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
         ListNode* result = NULL; 
      
    /* Base cases */
    if (a == NULL) 
        return(b); 
    else if (b == NULL) 
        return(a); 
      
    /* Pick either a or b, and recur */
    if (a->val <= b->val) 
    { 
        result = a; 
        result->next = mergeTwoLists(a->next, b); 
    } 
    else
    { 
        result = b; 
        result->next = mergeTwoLists(a, b->next); 
    } 
    return(result); 
    }
};