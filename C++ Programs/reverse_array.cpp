#include <bits/stdc++.h>
using namespace std;
//1,2,3,4,5
void reverse(int array[], int size){
    int start = 0;
    int end = (size-1);//5

    while(start<=end){
        int var=array[start];
        array[start]=array[end];
        array[end]=var;

        start += 1;
        end -= 1;
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr,n);

    return 0;
}
