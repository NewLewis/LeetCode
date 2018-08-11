#include <iostream>
#include "MyList.h"

using namespace std;

class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next)
        	return;
        	
        ListNode *slow = head,*fast = head;
        while(fast->next && fast->next->next){
        	slow = slow->next;
        	fast = fast->next->next;
        }
        
        ListNode *L2 = slow->next;
        slow->next = NULL;
        ListNode *L1 = head;
        
        //·´×ªL2 
        L2 = reverse(L2);
        
        //Æ´½Ó 
        int k = 1;
        ListNode *next1 = NULL,*next2 = NULL;
        while(L1 && L2){
        	next1 = L1->next;
        	L1->next = L2;
        	L1 = next1;
        	
        	next2 = L2->next;
        	L2->next = L1;
        	L2 = next2;
        }
    }
    
    ListNode *reverse(ListNode* head){
    	if(!head || !head->next)
    		return head;
    	
    	ListNode* next = NULL;
    	ListNode* pre = NULL;
    	
    	while(head){
    		next = head->next;
    		head->next = pre;
    		pre = head;
    		head = next;
    	}
    	
    	return pre;
    }
};

int main(){
	
}
