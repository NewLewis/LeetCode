#include <iostream>
#include "MyList.h"

using namespace std;

class Solution {
public:
	//—°‘Ò≈≈–Ú£¨TLE 
//    ListNode* sortList(ListNode* head) {
//    	if(!head)
//    		return NULL;
//    		
//        ListNode *p = NULL,*tmp,*res = NULL;
//        while(head){
//        	tmp = findMinNodePre(head);
////        	cout << tmp->next->val << endl;
//        	if(!tmp){
//        		if(!res){
//        			res = head;
//        			p = res;
//        		}else{
//        			res->next = head;
//        			res = res->next;
//        		}
//        	}else{
//        		if(!res){
//        			res = tmp->next;
//        			p = res;
//        		}else{
//        			res->next = tmp->next;
//        			res = res->next;
//        		}
//        	}
//        	
//        	//…æ≥˝◊Ó–°µƒ
//			if(!tmp){
//				head = head->next;
//			}else{
//				tmp->next = tmp->next->next;
//			}
////			printList(head);
//        }
//        return p;
//    }
//    
//    ListNode* findMinNodePre(ListNode* head){
//    	ListNode* minNode = head;
//		ListNode* minPre = NULL;
//    	ListNode* cur = head->next;
//    	ListNode* pre = head;
//    	
//    	while(cur){
//    		if(minNode->val > cur->val){
//    			minNode = cur;
//    			minPre = pre;
//    		}		
//    		pre = cur;
//    		cur = cur->next;
//    	}
//    	return minPre;
//    }
    
    //πÈ≤¢≈≈–Ú
	ListNode* merge(ListNode* head1,ListNode* head2){
		ListNode *A = head1,*B = head2;
		ListNode *p = NULL,*res = NULL;
		while(A && B){
//			cout << A->val << " " << B->val << endl;
			if(A->val < B->val){
				if(!res){
					res = A;
					p = res;
				}else{
					res->next = A;
					res = res->next;
				}
				A = A->next;
			}else{
				if(!res){
					res = B;
					p = res;
				}else{
					res->next = B;
					res = res->next;
				}
				B = B->next;
			}
			printList(p);
		}
		if(A) res->next = A;
		if(B) res->next = B;
		if(!A && !B)
			res->next = NULL;
		return p;
	} 
	
	ListNode* sortList(ListNode* head) {
		if(!head || !head->next)
			return head;
	
		ListNode *fast = head,*slow = head;
		while(fast->next && fast->next->next){
			slow = slow->next;
			fast = fast->next->next;
		}
		ListNode *p = slow->next;
		slow->next = NULL;
		
//		printList(head);
		
		ListNode *l1 = sortList(head);
		ListNode *l2 = sortList(p);
		printList(merge(l1,l2));
		return merge(l1,l2);
	}
};

int main(){
	Solution A;
//	ListNode* test = createList();
//	printList(A.sortList(test));
	
	int num1[3] = {1,3,5},num2[3] = {2,4,5};
	ListNode* test1 = createList(num1,3);
	ListNode* test2 = createList(num2,3);
	
	printList(A.merge(test1,test2));
	return 0;
} 
