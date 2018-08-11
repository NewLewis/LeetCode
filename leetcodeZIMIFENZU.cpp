#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    	vector<vector<string>> res;
    	for(int i=0;i<strs.size();i++){
    		int t = res.size();
    		if(t == 0){
    			vector<string> vec;
    			vec.push_back(strs[i]);
    			res.push_back(vec);
    		}else{
    			bool bo = false;
    			for(int j=0;j<t;j++){
    				if(isDeformation(res[j][0],strs[i])){
    					res[j].push_back(strs[i]);
    					bo = true;
    					break;
    				}
    			}
    			if(!bo){
    				vector<string> vec;
	    			vec.push_back(strs[i]);
	    			res.push_back(vec);
    			}
    		}
    	}
    	return res;
    }
    
    bool isDeformation(string str1,string str2){
    	
    	if(str1.size() != str2.size())
    		return false;
    	
    	int mp[256] = {0};
    	for(int i=0;i<str1.size();i++){
    		mp[str1[i]-'0']++;
    	}
    	
    	for(int i=0;i<str2.size();i++){
    		if(mp[str2[i]-'0'] == 0)
    			return false;
    		mp[str2[i]-'0']--;
    	}
    	return true;
    }
};

int main(){
	
}
