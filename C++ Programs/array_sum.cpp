#include <iostream>
using namespace std;

int array_sum(int array[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    int n;
    cout<<"Size Of Array: ";
    cin>>n;
    int arr[n];

    cout<<"Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sum Of Array's All Element: "<<array_sum(arr,n);

    return 0;
}
