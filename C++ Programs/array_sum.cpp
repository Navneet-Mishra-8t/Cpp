#include<iostream>

using namespace std;

int array_sum(int arr[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}

	return sum;
}

int main(){
	int n;
	cout << "Size Of The Array: ";
	cin >> n;

	int *arr = new int[n];

	cout << "Elements: ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	cout << "Sum: " << array_sum(arr, n);

	delete[] arr;
	arr = NULL;

	return 0;
}
