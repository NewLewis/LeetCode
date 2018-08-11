#include <iostream>
#include "MyList.h"

using namespace std;

//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
 
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
    	ListNode *sH = NULL;
    	ListNode *sT = NULL;
    	ListNode *bH = NULL;
    	ListNode *bT = NULL;
    	
    	while(head){
    		if(head->val < x){
    			if(!sH){
    				sH = head;
    				sT = sH;
    			}else{
    				sT->next = head;
    				sT = sT->next;
    			}
    		}else{
    			if(!bH){
    				bH = head;
    				bT = bH;
    			}else{
    				bT->next = head;
    				bT = bT->next;
    			}
    		}
    		head = head->next;
    	}
    	if(sT) sT->next = NULL;
    	if(bT) bT->next = NULL;
    	
    	if(sH && bH){
    		sT->next = bH;
    		return sH;
    	}else if(sH && !bH){
    		return sH;
    	}else{
    		return bH;
    	}
    }
};

int main(){
	ListNode* test = createList();
	
	Solution A;
	printList(A.partition(test,3));
}
