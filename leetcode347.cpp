#include <iostream>
#include <vector>
#include <functional>

using namespace std;

struct Node{
	int key;
	int val;
	Node(int key,int val):key(key),val(val){}
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    	vector<int> res;
    	
    	
    	for(int i=k/2;i>=0;i--){
    		adjust(value,i,k);
    	}
    	
    	for(int i=k+1;i<t;i++){
    		if(value[i] > value[0]){
    			value[0] = value[i];
    			adjust(value,1,k);
    		}
    	}
    	
    	for(int i=0;i<t;i++){
    		
    	}
    }
    
    void adjust(Node nums[],int i,int n){
    	int j = 2 * i;
    	Node tmp = nums[i-1];
    	
    	while(j <= n){
    		if(j < n && nums[j-1] > nums[j]){
    			j++;
    		}
    		if(tmp <= nums[j-1]){
    			break;
    		}
    		k[j/2-1] = k[j-1];
    		j *= 2;
    	}
    	nums[j/2-1] = tmp;
    }
};

int main(){
	
	
}
