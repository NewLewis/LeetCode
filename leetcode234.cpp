#include <iostream>
#include <vector>
#include "MyList.h"

using namespace std;

//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
 
class Solution {
public:
	ListNode* reverseList(ListNode* head){
        if(!head || !head->next)
            return head;

        ListNode* pre = NULL;
        ListNode* next = NULL;
        while(head){
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
    	if(!head || !head->next)
    		return true;
    		
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* t = NULL;
        
        while(fast->next && fast->next->next){
        	slow = slow->next;
        	fast = fast->next->next;
        }
		t = reverseList(slow->next);

        while(head && t){
        	if(head->val != t->val)
        		return false;
        	head = head->next;
        	t = t->next;
        }
        return true;
    }
};

int main(){
	ListNode* test = createList();
	
	cout << "test:" << endl;
	printList(test);
	
	Solution A;
	cout << A.isPalindrome(test);
}
