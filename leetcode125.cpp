#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
		if(s.empty())
			return true;
		int i = 0,j = s.size()-1;
		
		while(i <= j){
			while((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z') && (s[i] < '0' || s[i] > '9') && i <= j)
				i++;
			while((s[j] < 'a' || s[j] > 'z') && (s[j] < 'A' || s[j] > 'Z') && (s[j] < '0' || s[j] > '9') && i <= j)
				j--;
			if(i > j)
				break;
			if(!isSame(s[i],s[j]))
				return false;
			i++;
			j--;
		}
		return true;
    }
    
    bool isSame(char a,char b){
    	if(a >= 'a' && a <= 'z')
    		return a == b || a == char(b + 32);
    	else if(a >= 'A' && a <= 'Z')
    		return a == b || a == char(b - 32);
    	else
    		return a == b;
    }
};

int main(){
	
	Solution A;
	cout << A.isPalindrome("A man, a plan, a canal: Panama");
	
}
