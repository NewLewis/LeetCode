#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 0)
        	return head;
        if(!head)
        	return NULL;
        
        ListNode *p = head,*q = head;
        
        int k = n;
        for(int i=0;i<k;i++){
        	if(p->next)
        		p = p->next;
        	else 
        		return head->next;
        }
        
        while(p->next){
        	p = p->next;
        	q = q->next;
        }
        
        q->next = q->next->next;
        
        return head;
    }
};

int main(){
	
}
