#include<iostream>
                        
using namespace std;
 
int main(){
    //variables
    long int x, y, z;

    //taking the numbers from user
    cout << "Enter The Numbers: ";
    cin >> x >> y >> z;

    //variables
    long int grt = x;

    //finding the greatest number
    if(x==y && y==z && z==x){
        cout << "All Numbers Are Equal!!\n";
        return 0;
    }
    else{
        if(y > grt){
            grt = y;
        }else if(z > grt){
            grt = z;
        }else{
            cout << "Unable To Find\n";
            cout << "Error Occured\n";
            return 0;
        }
    }

    //printing the result
    cout << "Greatest Number: " << grt << endl;
                      
    return 0;
}
 