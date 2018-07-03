#include <iostream>

using namespace std;

class Solution {
public:
	int next[100000];
    int strStr(string haystack, string needle) {
        if(needle.empty())
        	return 0;
        if(haystack.size() < needle.size())
        	return -1;
        
        generateNext(needle);
        
        int si = 0;
        int mi = 0;
        
        while(si < haystack.size() && mi < needle.size()){
        	if(haystack[si] == needle[mi]){
        		mi++;
        		si++;
        	}else if(next[mi] == -1){
        		si++;
        	}else{
        		mi = next[mi];
        	}
        }
        
        return mi == needle.size() ? si-mi : -1;
    }
    void generateNext(string needle){
    	next[0] = -1;
    	if(needle.size() == 1)
    		return;
    	
    	next[1] = 0;
    	int cn = 0,pos = 2;
    	while(pos < needle.size()){
    		if(needle[pos-1] == needle[cn])
    			next[pos++] = ++cn;
    		else if(cn > 0)
    			cn = next[cn];
    		else 
    			next[pos++] = 0;
    	}
    }
};

int main(){
	
} 
