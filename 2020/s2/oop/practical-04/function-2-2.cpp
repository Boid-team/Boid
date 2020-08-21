//Acknowldgements: rituraj_jain at geeksforgeeks.org
//for the original code to get all sub-arrays in the vector
//Link: www.geeksforgeeks.org/generating-subarrays-using-recursion/


#include <iostream>
#include <vector>
using namespace std;
vector< vector< int > > vec;

vector<int> working;


int sum_vec(vector<int> n){
	int sum = 0;
	for(int i = 0; i < n.size(); i++){
		sum += n[i];
	}
	return sum;
}



void getSubArrays(vector<int> arr, int start, int end){
	working.clear();
	if(end == arr.size()){//stop execution 
		return;
	}else if(start > end){
		getSubArrays(arr,0,end + 1);
	}else{

		//add elements of array from start to end
		//to working vector
		for(int i = start; i < end; i++){
			working.push_back(arr[i]);
		}
		working.push_back(arr[end]);

		//push working vector to mothership vector vec
		vec.push_back(working);

		//increment starting point
		getSubArrays(arr, start + 1, end);
	}

	return;
}

int maximum_sum(int *nums, int length){

	// debug code:
	// cout << "Input array: ";
	// for(int i = 0; i < length; i++){
	// 	cout << *(nums + i) << " ";
	// }
	// cout << endl;


	//check if all elements are negative;
	int negCount = 0;
	for(int i = 0; i < length; i++){
		if(*(nums+i) < 0){
			negCount++;
		}
	}
	if(negCount == length){
		return 0;
	}

	int max;

	//copy input array to local working vector
	vector<int> v;
	for(int i = 0; i < length; i++){
		v.push_back(*(nums+i));
	}

	getSubArrays(v,0,0);

	max = sum_vec(vec[0]);
	for(int i = 1; i < vec.size(); i++){//go through each vector in vec
		int n = sum_vec(vec[i]);
		if(n > max){
			max = n;
		}

	}

	// debug code:
	// for(int i = 0; i < vec.size(); i ++){
	// 	for(int j = 0; j < vec[i].size(); j++){
	// 		cout << vec[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return max;
	
}

