#include <iostream>
                        
using namespace std;

//function for checking the prime number
bool isPrime(int n){
    int i = 2;

    //loop
    for (i; i < n; i++){
        if (n % i == 0){
            break;
        }
    }

    if (i == n){
        return true;
    }else {
        return false;
    }

}
 
int main(){
    //taking the number from the user
    int num;
    cout << "Number: ";
    cin >> num;

    //generating output
    if (isPrime(num)){
        cout << "The Number " << num << " Is Prime!";
    }else {
        cout << "The Number " << num << " Isn't Prime!";
    }
                      
    return 0;
}
