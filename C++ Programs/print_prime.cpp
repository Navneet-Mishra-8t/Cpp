#include <iostream>
                        
using namespace std;

//function for checking the given number is prime or not
bool isPrime(int n){
    int i = 0;

    for (i = 2; i < n; i++){
        if ((n % i) == 0){
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
    //variables
    int range;

    //taking the range from the user
    cout << "Range: ";
    cin >> range;

    //printing the prime number till the range
    for (int i = 0; i < range; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
                      
    return 0;
}
 
