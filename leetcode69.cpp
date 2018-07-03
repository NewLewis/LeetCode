#include <iostream>

using namespace std;

//class Solution {
//public:
    int mySqrt(int x) {

        int mid,left = 1,right = x;
        
        while(left <= right){
        	mid = left + (right - left) / 2;
        	if(mid <= x/mid)
        		left = mid + 1;
        	else
        		right = mid - 1;
        }
        
        return left - 1;
    }
//};

int main(){
	cout << mySqrt(8) << endl;
}
