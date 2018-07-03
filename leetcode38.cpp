#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	string vec[1000]; 
    string countAndSay(int n) {
        vec[0] = "1";
        vec[1] = "11";
        vec[2] = "21";
        vec[3] = "1211";
		vec[4] = "111221";
		
		if(n <= 4)
			return vec[n-1];
		
		for(int i=5;i<n;i++){
			string res,s = vec[i-1];
			int mp[556] = {0};
			
			int k = 0,t = 0;
			while(t < s.size()){
				if(s[t] == s[k]){
					mp[s[t]+300]++;
					t++;
				}else{
					res += (mp[s[k]+300] + '0');
					mp[s[k]+300] = 0;
					res += s[k];
					k = t;
				}
			}
			res += (mp[s[k]+300] + '0');
			res += s[k];
			
			vec[i] = res;
		}
		
		return vec[n-1]; 
    }
};

int main(){
	
	Solution A;
	cout << A.countAndSay(5) << endl;
	cout << A.countAndSay(6) << endl;
}
