#include<iostream>
                        
using namespace std;

//function for reversing the array
void reverse_array(int *arr, int size){
    //initializing starting and ending
    int start = 0;
    int end = (size-1);

    //interating through the array
    while(start < end){
        int var = *(arr + start) ;
        *(arr + start) = *(arr + end);
        *(arr + end) = var;

        start ++;
        end--;
    }

    return;
}

int main(){
    //taking size of the array 
    int n;
    cout << "Size Of The Array: ";
    cin >> n;

    //creating array dynamically
    int *arr = new int[n];

    //taking elemnts of the array
    cout << "Elements Of The Array: ";
    for(int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    //calling function to reverse the array
    reverse_array(arr, n);

    //printing the reversed array
    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++){
        cout << *(arr + i) <<" ";
    }

    //avoiding memory leak and dangling pointers
    delete[] arr;
    arr = NULL;

                      
    return 0;
}
 
