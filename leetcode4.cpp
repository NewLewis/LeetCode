#include <iostream>
#include <vector>
#include "Vec.h"

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    	int l1 = nums1.size();
    	int l2 = nums2.size();
    	int k = (l1 + l2) / 2 + 1;
    	if((l2 + l1) % 2 == 0){
    		double x = find(nums1,nums2,k);
    		double y = find(nums1,nums2,k+1);
    		return (x + y) / 2;
    	}else{
    		return find(nums1,nums2,k);
    	}
    }
    
    int find(vector<int>& nums1, vector<int>& nums2,int k){
    	int l1 = nums1.size(),l2 = nums2.size();
    	
    	if(l1 > l2)
    		return find(nums2,nums1,k);
    	if(nums1.empty())
    		return nums2[k-1];
    	
    	if(k <= l1){
    		return findUpMidNumber(nums1,nums2,0,k-1,0,k-1);
    	}
    	if(k > l2){
    		if(nums1[k-l2-1] >= nums2[l2-1])
    			return nums1[k-l2-1];
    		if(nums2[k-l1-1] >= nums1[l1-1])
    			return nums2[k-l1-1];
    		return findUpMidNumber(nums1,nums2,k-l2,l1-1,k-l1,l2-1);
    	}
    	if(nums2[k] >= nums1[l1-1]){
    		return nums2[k];
    	}
    	return findUpMidNumber(nums1,nums2,0,l1-1,k-l1,k-1);
    }
    
    int findUpMidNumber(vector<int> nums1,vector<int> nums2,int a1,int b1,int a2,int b2){
    	if(a1 == b1)
    		return nums1[a1] < nums2[a2] ? nums1[a1] : nums2[a2];
    		
    	int k1 = (a1 + b1) / 2;
    	int k2 = (a2 + b2) / 2;
    	int p;
    	if((b1-a1+1) % 2 == 0) p = 1;
    	else p = 0;
    		
    	if(nums1[k1] == nums2[k2])
    		return nums1[k1];
    	else if(nums1[k1] < nums2[k2])
    		return findUpMidNumber(nums1,nums2,k1+p,b1,a2,k2);
    	else
    		return findUpMidNumber(nums1,nums2,a1,k1,k2+p,b2);
    }
};

int main(){
	int num1[1] = {8342};
	int num2[1] = {23};
	vector<int> vec1 = createVec(num1,1);
	vector<int> vec2 = createVec(num2,1);
	
	Solution A;
//	for(int i=0;i<10;i++)
//		cout << A.find(vec1,vec2,i+1)<< endl;
	cout << A.findMedianSortedArrays(vec1,vec2);
} 
