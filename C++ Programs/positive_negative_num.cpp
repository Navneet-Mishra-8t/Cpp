#include<iostream>
                        
using namespace std;

int main(){
    //variables
    int n;

    //taking number from the user
    cout << "Number: ";
    cin >> n;

    //finding the given nuber is -ve or +ve
    if(n == 0){
        cout << "Number Is Neither +ve Nor -ve !!\n";
    }else{
        if(n > 0){
            cout << "The Number Is +ve !!\n";
        }else if(n < 0){
            cout << "The Number Is -ve !!\n";
        }else{
            cout << "Invalid!!\n";
        }
    }
                      
    return 0;
}
 