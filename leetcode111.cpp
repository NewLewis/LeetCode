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
    int minDepth(TreeNode* root) {
    	if(!root)
    		return 0;
    		
    	int l;
    	if(!root->left && !root->right)
    		l = 1;
    	else if(root->left && !root->right)
    		l = minDepth(root->left) + 1;
    	else if(!root->left && root->right)
    		l = minDepth(root->right) + 1;
    	else
    		l = min(minDepth(root->left),minDepth(root->right)) + 1;
    		
    	return l;
    }
};

int main(){
	
}
