#include <iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
    	if(!p && !q)
    		return true;
        if((p && !q) || (q && !p))
        	return false;
        if(p && q && p->val != q->val)
        	return false;
        if(p && q)
        	return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};

int main(){
	TreeNode *p = new TreeNode(1);
	TreeNode *t = p;
	
	TreeNode *tmp = new TreeNode(2);
	t->left = tmp;
	
	TreeNode *q = new TreeNode(1);
	t = q;
	
	TreeNode *tmp2 = new TreeNode(2);
	t->right = tmp2;
	
	Solution A;
	cout << A.isSameTree(p,q) << endl;
}
