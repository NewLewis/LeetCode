#include <iostream>
#include "MyList.h"
#include <map>

using namespace std;

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if(!head || !head->next)
			return head;
			 
		map<ListNode*,int> mp;
		while(head) {
			mp[head]++;
			head = head->next;
		}
		
		map<ListNode*,int>::iterator i;
		ListNode *res = new ListNode(0),*p = res;
		for(i=mp.begin();i!=mp.end();i++){
			if((*i).second == 1){
				res->next = (*i).first;
				res = res->next;
			}	
		}
		res->next = NULL;
		
		return p->next;
	}
};

int main(){
	
}
