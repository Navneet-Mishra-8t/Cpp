#include <iostream>
#include <vector>
                        
using namespace std;
 
int main(){

    int size;
    cout << "Size Of The Vector: ";
    cin >> size;

    vector <int> vtr(size);

    cout << "Elements Of The Vector: ";
    for (int i = 0; i < size; i++){
        cin >> vtr[i];
    }

    int x;
    cout << "Value Of x: ";
    cin >> x;

    cout << "Elements In The Vector Greater Than Value x: ";
    for (int ele : vtr){
        if (ele > x){
            cout << ele << " ";
        }
    }

    cout << endl;
                      
    return 0;
}
 