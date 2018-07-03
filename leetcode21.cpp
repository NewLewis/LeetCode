#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* p = head;
        
        while(l1 && l2){
        	if(l1->val <= l2->val){
        		head->next = l1;
        		head = head->next;
        		l1 = l1->next;
        		continue;
        	}
        	
        	if(l1->val > l2->val){
        		head->next = l2;
        		head = head->next;
        		l2 = l2->next;
        		continue;
        	}
        }
        
        while(l1){
    		head->next = l1;
    		head = head->next;
    		l1 = l1->next;
    	}
    	
    	while(l2){
    		head->next = l2;
    		head = head->next;
    		l2 = l2->next;
    	}
    	
    	return p->next;
    }
};

void print(ListNode* head){
	while(head){
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

int main(){
	ListNode* l1 = new ListNode(0);
	ListNode* head1 = l1;
	
	for(int i=1;i<10;i=i+1){
		ListNode* tmp = new ListNode(i);
		l1->next = tmp;
		l1 = l1->next;
	}
	
	ListNode* l2 = new ListNode(0);
	ListNode* head2 = l2;
	
	for(int i=2;i<10;i+=2){
		ListNode* tmp = new ListNode(i);
		l2->next = tmp;
		l2 = l2->next;
	}
	print(head1);
	print(head2);
	
	
	Solution A;
	ListNode* newL = A.mergeTwoLists(head1,head2);
	
	print(head1);
	print(head2);
	print(newL);
	
	cout << &head1 << endl;
	cout << &head2 << endl;
	cout << &newL << endl;
}
