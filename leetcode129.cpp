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
	int res;
    int sumNumbers(TreeNode* root) {
    	res = 0;
    	dfs(root,0);
    	return res;
    }
    
    void dfs(TreeNode* root,int k){
    	if(!root)
    		return;
    	if(!root->left && !root->right){
    		res += k * 10 + root->val;
    		return; 
    	}
    		
    	if(root->left)
    		dfs(root->left,k*10 + root->val);
		if(root->right)
			dfs(root->right,k*10 + root->val); 
    }
};

int main(){
	
}
