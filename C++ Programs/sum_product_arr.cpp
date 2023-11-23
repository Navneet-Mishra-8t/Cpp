#include<iostream>
                        
using namespace std;

//function for generating array sum and product
void sum_product_arr(int *arr, int size){
    //variables
    int sum = 0, product = 1;

    //iterating through the array
    for(int i = 0; i < size; i++){
        sum += *(arr + i);
        product *= *(arr + i);
    }

    //printing the result
    cout << "Sum Of The Array's Elements: " << sum << endl;
    cout << "Product Of The Array's Elements: " << product << endl;

    return;

}
 
int main(){
    //taking input of array size from user
    int n;
    cout << "Size Of The Array: ";
    cin >> n;

    //creating array dynamically
    int *arr = new int[n];

    //taking elements of the array from the user
    cout << "Elements Of The Array: ";
    for(int i = 0; i < n; i++){;
        cin >> *(arr + i);
    }

    //calling function for generating sum and product
    sum_product_arr(arr, n);

    //avoiding memory leaks and dangling pointers
    delete[] arr;
    arr = NULL;

    return 0;
}
 
