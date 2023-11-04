#include <iostream>
using namespace std;

void fibonacci(int num){
    int ele1=0, ele2=1;
    cout<<"Fibonacci Sequence: "<<endl;
    cout<<ele1<<" "<<ele2<<" ";
    if(num<=2){
        return;
    }else{
        for(int i=0;i<=num;i++){
            int elenext=(ele1+ele2);
            cout<<elenext<<" ";
            ele1=ele2;
            ele2=elenext;
        }
    }
}

int main(){
    int n;
    cout<<"Number Of Elements: ";
    cin>>n;

    fibonacci(n);

    return 0;
}
