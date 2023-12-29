#include <iostream>
                        
using namespace std;

//function for printing the rectangle
void rec_draw(int ros, int cols){
    for (int i = 0; i < cols; i++){
        for (int j = 0; j < ros; j++){
            cout << "*";
        }
        cout << endl;
    }
}
 
int main(){

    //variables                      
    int ros, cols;

    //taking the number of rows and columns from the user
    cout << "Rows: ";
    cin >> ros;
    cout << "Columns: ";
    cin >> cols;

    //calling function rec_draw
    rec_draw(ros, cols);

    return 0;
}
 
