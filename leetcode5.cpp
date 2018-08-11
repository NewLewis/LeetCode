#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
    	s = s_to_manacherString(s);
        int index = -1;
        int pr = -1;
        int pArr[10000] = {0};
        int max = INT_MIN;
        string res;
        
        for(int i=0;i<s.size();i++){
        	pArr[i] = pr > i ? min(pArr[index * 2 - i], pr - i) : 1;
        	while(i + pArr[i] < s.size() && i - pArr[i] >= 0){
        		if(s[i + pArr[i]] == s[i - pArr[i]]){
        			pArr[i]++;
        		}else{
        			break;
        		}
        	}
        	
        	if(i + pArr[i] > pr){
        		pr = i + pArr[i];
        		index = i;
        	}
        	if(pArr[i] > max){
        		max = pArr[i];
        		res = substr(s,i - pArr[i] + 1,i + pArr[i] - 1);
        	}
        }
    	
    	res = manacher_to_s(res);
    	return res;
    }
    string s_to_manacherString(string s){
    	string res = "#";
    	for(int i=0;i<s.size();i++){
    		res += s[i];
    		res += "#";
    	}
    	return res;
    }
    
    string manacher_to_s(string s){
    	string res;
    	for(int i=1;i<s.size();i+=2){
    		res += s[i];
    	}
    	
    	return res;
    }
    
    string substr(string s,int start,int end){
    	string res;
    	for(int i=start;i<=end;i++){
    		res += s[i];
    	}
    	return res;
    }
};

int main(){
	
} 
