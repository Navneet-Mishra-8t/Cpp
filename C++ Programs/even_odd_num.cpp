#include<iostream>
                        
using namespace std;
 
int main(){
    //variables
    int n;

    //taking number from the user
    cout << "Enter The Number: ";
    cin >> n;

    //checking the number (ood or even)
    if(n == 0){
        cout << n << " is a even number.\n";
    }else if(n % 2 == 0){
        cout << n << " is a even number.\n";
    }else{
        cout << n << " is a odd number.\n";
    }
                      
    return 0;
}
 