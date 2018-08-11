#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public: 
     ListNode* reverseList(ListNode* head){
         if(head==NULL||head->next==NULL)
            return head;
            
         ListNode* nextNode=head->next;
         ListNode* res=reverseList(head->next);
         nextNode->next=head;
         head->next=NULL;
         return res;
     }
};

int main(){
	
} 
