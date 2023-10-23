#include <iostream>
#include <string>
using namespace std;

class solver{
    public:
        int add(int a, int b){
            int result=(a+b);
            return result;
        }
        int sub(int a, int b){
            int result=(a-b);
            return result;
        }
        int mult(int a, int b){
            int result=(a*b);
            return result;
        }
        int divd(int a, int b){
            int result=(a/b);
            return result;
        }
        int mdulo(int a, int b){
            int result=(a%b);
            return result;
        }
};

int main() {
    int a, b;
    string opt;
    cout<<"Welcome To Two Value Calculator- "<<"\n";
    
    cout<<"First Value: ";
    cin>>a;
    cout<<"Second Value: ";
    cin>>b;
    cout<<"Operator(+,-,*,/,%): ";
    cin>>opt;

    solver doer;
    if(opt=="+"){
        cout<<"Your Answer: "<<doer.add(a,b);
    }else if(opt=="-"){
        cout<<"Your Answer: "<<doer.sub(a,b);
    }else if(opt=="*"){
        cout<<"Your Answer: "<<doer.mult(a,b);
    }if(opt=="/"){
        cout<<"Your Answer: "<<doer.divd(a,b);
    }else if(opt=="%"){
        cout<<"Your Answer: "<<doer.mdulo(a,b);
    }else{
        cout<<"Not Recognised!!"<<"\n";
        cout<<"Program Exited!!"<<"\n";
        cout<<"Thankyou!!"<<"\n";
    }

    return 0;
}
