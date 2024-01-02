#include <iostream>
#include <vector>
                        
using namespace std;

bool isVectorSorted(vector <int> v, int size){

    bool r_val = false;

    for (int i = 0; i < size; i++){
        if (i == 0){
            continue;
        }
        if (v[i] >= v[i - 1]){
            r_val = true;
        }
        else{
            r_val = false;
            break;
        }
    }

    return r_val;

}
 
int main(){

    int size;
    cout << "Size Of The Vector: ";
    cin >> size;

    vector <int> vtr(size);

    cout << "Elements Of The Vector: ";
    for (int i = 0; i < size; i++){
        cin >> vtr[i];
    }

    if (isVectorSorted(vtr, size)){
        cout << "The Vector Given By You Is Sorted :)" << endl;
    }else if (isVectorSorted(vtr, size) == false){
        cout << "The Vector Given By You Is Not Sorted :(" << endl;
    }else{
        cout << "Something Invalid ;(" << endl;
    }
                      
    return 0;
}
 