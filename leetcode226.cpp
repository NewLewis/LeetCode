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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
        	return NULL;
        
        if(!root->left && !root->right)
        	return root;
        
        TreeNode *tmp = root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(tmp);
        
        return root;
    }
};

int main(){
	
} 
