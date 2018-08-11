#include <iostream>
#include "MyList.h"

using namespace std;

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
    	
    	if(!head || !head->next)
    		return head;
    	
        ListNode *L1 = NULL,*L2 = NULL;
    	ListNode *P = head,*res1,*res2;
    	
    	int k = 1;
    	while(P){
    		if(k%2 == 1){
    			if(!L1){
    				L1 = P;
    				res1 = L1;
    			}else{
    				L1->next = P;
    				L1 = L1->next;
    			}
    		}else{
    			if(!L2){
    				L2 = P;
    				res2 = L2;
    			}else{
    				L2->next = P;
    				L2 = L2->next;
    			}
    		}
    		k++;
    		P = P->next;
    	}
    	
		L1->next = res2;
		L2->next = NULL;
		
		return res1;
    }
};

int main(){
	
} 
