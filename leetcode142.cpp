#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head,*slow = head;
        while(fast && fast->next){
        	slow = slow->next;
        	fast = fast->next->next;
        	if(slow == fast)
        		break;
        }
        if(!fast || !fast->next)
        	return NULL;
        
        ListNode *p = head;
        while(p != slow){
        	p = p->next;
        	slow = slow->next;
        }
        return slow;
    }
};

int main(){
	
}
