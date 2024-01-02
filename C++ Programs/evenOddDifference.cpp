#include <iostream>
#include <vector>

using namespace std;
 
int main(){

    int size;
    cout << "Size Of The Vector: ";
    cin >> size;

    vector <int> vtr(size);

    cout << "Elements of The Vector: ";
    for (int i = 0; i < size; i++){
        cin >> vtr[i];
    }

    int evenIndi = 0, oddIndi = 0;

    for (int i = 0; i < size; i++){
        if (i % 2 == 0){
            evenIndi += vtr[i];
            continue;
        }
        else {
            oddIndi += vtr[i];
        }
    }

    cout << "The Difference Between The Elements On Even Indices And Odd Indices: " << (evenIndi - oddIndi);
    cout << endl;              
                      
    return 0;
}
 