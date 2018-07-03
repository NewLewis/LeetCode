#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        res.push_back("()");
        
    	for(int i=1;i<n;i++){
    		res = generate(res);
    	}
    	return res;
    }
    
    vector<string> generate(vector<string>& vec){
    	vector<string> res;
    	
    	for(int i=0;i<vec.size();i++){
    		res.push_back("(" + vec[i] + ")");
    	}
    	for(int i=0;i<vec.size();i++){
    		if(i == vec.size()-1)
    			res.push_back(vec[i] + "()");
    		else{
    			res.push_back(vec[i] + "()");
    			res.push_back("()" + vec[i]);
    		}
    	}
    	return res;
    }
};

int main(){
	
} 
