#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
    	if(!head)
    		return NULL;
        ListNode *p,*q;
        
        while(head->val == val){
        	head = head->next;
        }
        p = head,q = p;
        
        while(head->next){
        	if(head->next->val != val){
        		p->next = head->next;
        		head = head->next;
        		p = p->next;
        	}else{
        		head = head->next;
        	}
        }
        p->next = NULL;
        return q;
    }
};

int main(){
	ListNode *head = new ListNode(1);
	ListNode *p = head;
	for(int i=2;i<=6;i++){
		ListNode *tmp = new ListNode(i);
		head->next = tmp;
		head = head->next;
	}
	
	Solution A;
	ListNode * res = A.removeElements(p,6);
	
	while(res){
		cout << res->val << " ";
		res = res->next;
	}
	return 0;
}
