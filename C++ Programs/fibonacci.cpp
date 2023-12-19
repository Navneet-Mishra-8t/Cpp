#include <iostream>
                        
using namespace std;

//function to generate fibonacci sequence till the range given
void fibonacci(int range){
    int f_ele = 0, s_ele = 1;

    //printing the elements (loop)
    cout << "Fibonacci Sequence: ";
    cout << f_ele << " " << s_ele << " ";
    if (range<=2){
        return;
    }
    else {
        for (int i = 0; i < range; i++){
        int n_ele = (f_ele + s_ele);
        cout << n_ele << " ";

        f_ele = s_ele;
        s_ele = n_ele;
        }
    }

}
 
int main(){
    //taking the range of the fibonacci sequence
    int range;
    cout << "Range Of The Fibonacci Sequence: ";
    cin >> range;

    //function to print the fibonacci sequence
    fibonacci(range);                                
                      
    return 0;
}
 
