#include <iostream>
#include <stack>
#include <map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char,char> mp;
        mp['['] = ']';
        mp['('] = ')';
        mp['{'] = '}';
        
        for(int i=0;i<s.size();i++){
        	if(s[i] == '(' || s[i] == '[' || s[i] == '{')
        		st.push(s[i]);
        	else{
        		if(st.empty() || mp[st.top()] != s[i])
        			return false;
        		st.pop();
        	}
        }
        
        if(st.empty())
	        return true;
	    else
	    	return false;
    }
};

int main(){
	
}
