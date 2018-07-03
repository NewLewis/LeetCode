#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
	map<char,string> mp;
	void generate(){
		mp['2'] = "abc";
		mp['3'] = "def";
		mp['4'] = "ghi";
		mp['5'] = "jkl";
		mp['6'] = "mno";
		mp['7'] = "pqrs";
		mp['8'] = "tuv";
		mp['9'] = "wxyz";
//		cout << "³õÊ¼»¯ÁË°¡" << endl;
	}
	
    vector<string> letterCombinations(string digits) {
    	generate();
    	vector<string> res;
//    	cout << "hehe" << endl;
//    	cout << digits << endl;
        for(int i=0;i<digits.size();i++){
        	res = merge(res,mp[digits[i]]);
//        	for(int i=0;i<res.size();i++){
//				cout << res[i] << " ";
//			}
//			cout << endl;
        }
        return res;
    }
    
    vector<string> merge(vector<string> vec,string s){
//    	cout << s << endl;
    	if(vec.empty()){
    		for(int i=0;i<s.size();i++)
    			vec.push_back(string(1,s[i]));
//			cout << "empty" << endl;
    		return vec;
    		
    	}else {
    		vector<string> res;
    		for(int i=0;i<vec.size();i++)
    			for(int j=0;j<s.size();j++)
    				res.push_back(vec[i]+s[j]);
//			cout << "Not empty" << endl;
    		return res;
    		
    	}
    }
};

int main(){
	Solution A;
	vector<string> res = A.letterCombinations("23");
	for(int i=0;i<res.size();i++){
		cout << res[i] << " ";
	}
}
