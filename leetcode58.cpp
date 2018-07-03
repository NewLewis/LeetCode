#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
        	return 0;
        
        int k = s.size() - 1;
        while(s[k] == ' ')
        	k--;
        
        int res = 0;
        while(s[k] != ' ' && k >= 0){
        	k--;
        	res++;
        }
        
        return res;
    }
};

int main(){
	
} 
