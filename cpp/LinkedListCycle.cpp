/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        vector<ListNode*> ptrList;
        while(head!=nullptr){
            for(int i=0;i<ptrList.size();i++){
                if(head==ptrList[i]){
                    return true;
                } 
            }
            ptrList.push_back(head);
            head=head->next;
        }
        return false;
        
    }
};