#include <iostream>
                        
using namespace std;

bool isArraySorted(int *arr, int size){

    bool r_val = false;

    for (int i = 0; i < size; i++){
        if (i == 0){
            continue;
        }
        if (*(arr + i) >= *(arr + (i - 1))){
            r_val = true;
        }
        else {
            r_val = false;
            break;
        }
    }

    return r_val;

}
 
int main(){

    int size;
    cout << "Size Of The Array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Elements Of The Array: ";
    for (int i = 0; i < size; i++){
        cin >> *(arr + i);
    }

    if (isArraySorted(arr, size)){
        cout << "The Given Array Is Sorted :)" << endl;
    }else if (isArraySorted(arr, size) == false){
        cout << "The Given Array Isn't Sorted :(" << endl;
    }else{
        cout << "Something Invalid ;(" << endl;
    }
                      
    return 0;
}
 