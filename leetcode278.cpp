#include <iostream>

using namespace std;

bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    	int l = 0,r = n;
        while(l < r){
        	int mid = l + (r - l) / 2;
        	if(isBadVersion(mid)){
        		if(mid == 1 || mid - 1 >= 1 && !isBadVersion(mid-1))
        			return mid;
        		else
        			r = mid - 1;
        	}else{
        		if(mid + 1 <= n && isBadVersion(mid + 1))
        			return mid + 1;
        		else
        			l = mid + 1;
        	}
        }
    }
};

int main(){
	
}
