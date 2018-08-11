#include <iostream>
#include <cmath>

using namespace std;

#define k 0.01

class Solution {
public:
    bool isPowerOfThree(int n) {
    	return ( n>0 &&  1162261467%n==0);
    }
};

int main(){
	int n;
	cin >> n;
	Solution A;
	cout << A.isPowerOfThree(n);
	return 0;
}
