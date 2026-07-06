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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(!head || head->next==nullptr) return nullptr;
         ListNode* temp = head;
        int cnt =0;
        while( temp!=nullptr){
            cnt++;
            temp= temp->next;

        }
         int indptr = cnt-n;
           if(indptr == 0){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
         ListNode*  curr = head;
         ListNode* prev = nullptr;
          for( int i =0;i<indptr; i++){
            prev = curr;
            curr= curr->next;
          }
          prev->next =  curr->next;
          delete( curr);
          return head;
     

        
    }
};
