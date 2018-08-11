#include <iostream>
#include <queue>

using namespace std;

struct TreeLinkNode {
	int val;
	TreeLinkNode *left, *right, *next;
	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};
 
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root)
        	return;
        
       	queue<TreeLinkNode*> que;
       	que.push(root);
       	
       	while(!que.empty()){
       		
       		queue<TreeLinkNode*> tque;
       		while(!que.empty()){
       			TreeLinkNode* tmp = que.front();
       			que.pop();
       			
       			if(!que.empty())
       				tmp->next = que.front();
       			
	       		tque.push(tmp);
       		}
       		
       		
       		while(!tque.empty()){
       			TreeLinkNode* tmp = tque.front();
       			tque.pop();
       			
       			if(tmp->left)
       				que.push(tmp->left);
       			if(tmp->right)
       				que.push(tmp->right);
       		}
       	}
    }
};

int main(){
	
}
