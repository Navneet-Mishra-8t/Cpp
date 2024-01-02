#include <iostream>
#include <vector>

using namespace std;
 
int main(){

    int size;
    cout << "Size Of the Vector: ";
    cin >> size;

    vector <int> vtr(size);

    cout << "Elements Of The Vector: ";
    for (int i = 0; i < size; i++){
        cin >> vtr[i];
    }

    int x;
    cout << "Element x: ";
    cin >> x;

    int f_at = -1;

    for (int i = vtr.size(); i >= 0; i--){
        if (vtr[i] == x){
            f_at = i;
            break;
        }
    }

    cout << "Element: " << x << "; At Last Found At Index: " << f_at << endl;

    return 0;
}
 