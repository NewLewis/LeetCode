#include <iostream>
#include <cmath>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    bool isBalanced(TreeNode* root) {
    	if(!root)
    		return true;
    	
    	if(abs(hight(root->left) - hight(root->right)) > 1)
    		return false;
    	
    	return isBalanced(root->left) && isBalanced(root->right);
    }
    
    int hight(TreeNode* root){
    	if(!root)
    		return 0;
    		
    	int l = max(hight(root->left),hight(root->right)) + 1;
    	
    	return l; 
    }
};

int main(){
	
}
