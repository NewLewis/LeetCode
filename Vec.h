#include <iostream>
#include <vector>

using namespace std;

vector<int> createVec(int num[],int k){
	vector<int> vec;
	for(int i=0;i<k;i++){
		vec.push_back(num[i]);
	}
	return vec;
}

void printVec(vector<int> vec){
	for(int i=0;i<vec.size();i++){
		cout << "No." << i << ": " << vec[i] << " ";
	}
	cout << endl;
}
