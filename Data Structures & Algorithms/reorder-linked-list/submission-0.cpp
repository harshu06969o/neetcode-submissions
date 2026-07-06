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
ListNode* reverseList(ListNode* head) {
        ListNode *  temp = nullptr;
        ListNode* curr = head;
        while(curr){
            ListNode* storage= curr->next;

            curr->next = temp;
            temp = curr;
            curr= storage;


        }
        return temp;
        
    }
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        int cnt =0;
        while( temp!=nullptr){
            cnt++;
            temp= temp->next;

        }
         int ind =  cnt-(cnt/2)-1;
         ListNode* ptrind = head;
          for( int i =1; i<=ind;i++){
            ptrind= ptrind ->next;
          }
           ListNode* rll = reverseList( ptrind->next);
           ptrind->next = nullptr;
           ListNode* curr = head;
           ListNode* prev = rll;
           while( curr!=nullptr &&  prev!=nullptr){
            ListNode* currnext = curr->next;
            ListNode* prevnext = prev->next;
            curr->next= prev;
            prev->next = currnext;
            curr= currnext;
            prev = prevnext;

           }
             





        
    }
};
