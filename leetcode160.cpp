#include <iostream>
#include "MyList.h"

using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    	int l1 = 0,l2 = 0;
    	ListNode *endA = headA,*endB = headB;
		while(endA){
			l1++;
			endA = endA->next;
		}    
		while(endB){
			l2++;
			endB = endB->next; 
		}
		
		if(endA != endB)
			return NULL;
		
		ListNode *s1 = headA,*s2 = headB;
		if(l1 > l2){
			int t = l1 - l2;
			while(t--)
				s1 = s1->next;
		}else if(l1 < l2){
			int t = l2 - l1;
			while(t--)
				s2 = s2->next;
		}
		
		while(s1 != s2){
			s1 = s1->next;
			s2 = s2->next;
		}
		
		return s1;
    }
};

int main(){
	
} 
