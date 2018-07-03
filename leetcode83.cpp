#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    	if(!head)
    		return NULL;
    	
        ListNode *p = head;
        ListNode *q = head;
        
        while(q){
        	if(q->val == p->val){
        		q = q->next;
        	}else{
        		p->next = q;
        		p = p->next;
        		q = q->next;
        	}
        }
        p->next = NULL;
        
        return head;
    }
};

int main(){
	
}
