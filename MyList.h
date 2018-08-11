#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* createList(){
	int tmp;
	ListNode* head = new ListNode(0),*p = head;
	while(cin >> tmp){
		ListNode *t = new ListNode(tmp);
		p->next = t;
		p = p->next;
	}
	
	return head->next;
}

ListNode* createList(int num[],int n){
	ListNode* head = new ListNode(0),*p = head;
	for(int i=0;i<n;i++){
		ListNode *t = new ListNode(num[i]);
		p->next = t;
		p = p->next;
	}
	
	return head->next;
}

void printList(ListNode* head){
	if(head){
		cout << head->val;
		head = head->next;
	}
		
	while(head){
		cout << "->" << head->val;
		head = head->next;
	}
	cout << endl;
}
