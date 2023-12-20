#include <iostream>
                        
using namespace std;
 
//function to reverse the number 
void reverse_num(int n){
    int r_num = 0;

    while (n != 0){
        int l_num = (n % 10);
        r_num = (r_num * 10) + l_num;

        n /= 10;
    }

    cout << "Reversed Number: " << r_num;
}

int main(){
    //taking number from user
    int n;
    cout << "Number: ";
    cin >> n;

    //calling function to print the result
    reverse_num(n);                        
                      
    return 0;
}
 
