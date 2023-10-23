#include <iostream>
using namespace std;
/*fibonnaci == 0,1,1,2,3,5,8,13....n*/

void fibonacci(int num){
    int var1=0, var2=1, nexTerm;
    cout<<var1<<" "<<var2<<" ";

    for(int i=2;i<num;i++){
        nexTerm = (var1+var2);
        cout<<nexTerm<<" ";
        var1=var2;
        var2=nexTerm;
    }
};

int main(){
    int n;
    cin>>n;

    fibonacci(n);
    return 0;
}