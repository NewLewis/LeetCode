#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	vector<string> res;
    vector<string> binaryTreePaths(TreeNode* root) {
    	string str = "";
    	dfs(root,str);
    	return res;
    }
    
    string int2string(int num){
    	stringstream s;
    	s << num;
    	string res;
    	s >> res;
    	return res;
    }
    
    void dfs(TreeNode* root,string str){
    	if(!root)
    		return;
    	if(!root->left && !root->right){
    		str += int2string(root->val);
    		res.push_back(str);
    	}else if(root->left && !root->right){
    		string nextStr = str + int2string(root->val) + "->";
    		dfs(root->left,nextStr);
    	}else if(!root->left && root->right){
    		string nextStr = str + int2string(root->val) + "->";
    		dfs(root->right,nextStr);
    	}else{
    		string nextStr = str + int2string(root->val) + "->";
    		dfs(root->left,nextStr);
    		dfs(root->right,nextStr);
    	}
    }
};

int main(){
	
} 
