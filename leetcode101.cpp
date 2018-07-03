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
    bool isSymmetric(TreeNode* root) {
        if(!root)
        	return true;
        return isSameTree(root->left,root->right);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
    	if(!p && !q)
    		return true;
        if((p && !q) || (q && !p))
        	return false;
        if(p && q && p->val != q->val)
        	return false;
        if(p && q)
        	return isSameTree(p->left,q->right) && isSameTree(p->right,q->left);
    }
};

int main(){
	
}
