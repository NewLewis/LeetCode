#include <iostream>
#include "MyList.h"

using namespace std;

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0)
        	return head;
        	
        int l = getNumber(head);
        if(k%l == 0)
        	return head;
        
        ListNode *slow = head,*fast = head;
        int t = k%l;
        
        while(t--)
        	fast = fast->next;
        
        while(fast->next){
        	fast = fast->next;
        	slow = slow->next;
        }
        
        ListNode *res = slow->next; 
		slow->next = NULL;
		fast->next = head;
		
		return res;
    }
    
    int getNumber(ListNode *head){
    	int res = 0;
    	
    	while(head){
    		res++;
    		head = head->next;
    	}
    	
    	return res;
    }
};

int main(){
	
}
