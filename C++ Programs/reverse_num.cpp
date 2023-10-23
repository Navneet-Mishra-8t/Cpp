#include <iostream>
using namespace std;

int main(){
    int n;//1234
    cin>>n;
    int rnum=0;

    do{
        int digit=n%10;
        rnum = (rnum * 10) + digit;
        n /= 10;//123.4
    } while(n!=0);

    cout<<rnum<<endl;

    return 0;
}
