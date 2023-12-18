#include <iostream>
#include <string>

using namespace std;

//function for finding the biggest formed number
void big_num(string &str_num , int size){
    for (int i = 0; i < (size-1); i++){
        for ( int j = (i+1); j < size; j++){
            if (str_num[i] < str_num[j]){
                swap(str_num[i], str_num[j]);
            }
        }
    }
    cout << "Biggest Formed Number: " << str_num; 
}
 
int main(){
    //taking string integer from user
    string str_num;
    cout << "Integer: ";
    cin >> str_num;                           

    //generating size of the str_num
    int size = str_num.length();

    //calling function to print the result
    big_num(str_num, size);

    return 0;
}
 
