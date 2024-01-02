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
    cout << "Element x: ";
    cin >> x;

    int occurences = 0;

    for (int i = 0; i < size; i++){
        if (vtr[i] == x){
            occurences += 1;
        }
    }

    if (occurences == 0){
        occurences = -1;
    }

    cout << "Element: " << x << "; Founded " << occurences << " Times In The Vector" << endl;

    return 0;
}
 