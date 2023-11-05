#include <iostream>
using namespace std;

bool pytha_check(int a, int b, int c){
    /*(a^2+b^2=c^2)*/

    int basper = ((a*a)+(b*b));
    int hypo = (c*c);

    if(basper==hypo){
        return true; // '1'
    }else{
        return false; // '0'
    }
}

int main(){
    int a,b,c; //Ex-(3,4,5)
    cout<<"Pythagorean Triplets: ";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            if(pytha_check(b,c,a)==true){
                cout<<"Pythagorean Triplets!!"<<endl;
            }else{
                cout<<"Non-Pythagorean!!"<<endl;
            }
        }
    }else if(b>a){
        if(b>c){
            if(pytha_check(a,c,b)==true){
                cout<<"Pythagorean  Triplets!!"<<endl;
            }else{
                cout<<"Non-Pythagorean!!"<<endl;
            }
        }
    }else if(c>a){
        if(c>b){
            if(pytha_check(b,a,c)==true){
                cout<<"Pythagorean Triplets!!"<<endl;
            }else{
                cout<<"Non-Pythagorean!!"<<endl;
            }
        }
    }else{
        cout<<"Not Recognised!!"<<endl;
    }
    
    return 0;
}
