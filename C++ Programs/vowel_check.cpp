#include <iostream>
                        
using namespace std;
 
int main(){
    //taking the alphabet form user
    char ch;
    cout << "Alphabet: ";
    cin >> ch;

    //checking the input weather it is alphabet or n0t
    if (isalpha(ch)){
        //checking the input is a vowel or not
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            cout << ch << " is a vowel." << endl;
        }else {
            cout << ch << " is a consonant." << endl;
        }
    } else{
        cout << ch << " isn't a alphabet.";
    }
                      
    return 0;
}
 
