#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty())
    	return "";
    if(strs.size() == 1)
    	return strs[0];
    
    string s = func(strs[0],strs[1]);
    for(int i=2;i<strs.size();i++)
    	s = func(s,strs[i]);
    
    return s;
}

string func(string s1,string s2){
	int i = 0,j = 0;
	string res = "";
	
	while(i < s1.size() && j < s2.size()){
		if(s1[i] == s2[j])
			res += s1[i];
		else 
			break;
		i++;
		j++;
	}
	
	return res;
}

int main(){
	
}
