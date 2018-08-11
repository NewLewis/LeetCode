#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)
        	return l2;
        if(!l2)
        	return l1;
        
        ListNode *head = new ListNode(0),*p = head;
        int k,z = 0;
        while(l1 || l2){
        	if(!l1)
        		k = l2->val + z;
        	else if(!l2)
        		k = l1->val + z;
        	else 
        		k = l1->val + l2->val + z;
        		
			if(k > 9){
				k %= 10;
				z = 1;
			}else{
				z = 0;
			}
			
			ListNode *node = new ListNode(k);
			head->next = node;
			head = head->next;
			
			if(l1) l1 = l1->next;
			if(l2) l2 = l2->next;
			
        }
        if(z == 1){
        	ListNode *node = new ListNode(1);
        	head->next = node;
        }
        return p->next;
    }
};

int main(){
	ListNode *a = new ListNode(5);
	ListNode *b = new ListNode(5);
	Solution A;
	ListNode *res = A.addTwoNumbers(a,b);
	
	while(res){
		cout << res->val << "-";
		res = res->next;
	}
	cout << endl;
	
	return 0;
} 
