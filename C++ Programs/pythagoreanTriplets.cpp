#include <bits/stdc++.h>
using namespace std;

int great(int a,int b,int c){
    int grt=0;
    if(a>b){
        if(a>c){
            grt = a;
        }else{
            grt = c;
        }
    }else if(a<b){
        if(b>c){
            grt = b;
        }else{
            grt = c;
        }
    }
    return grt;
};

int pytha(int greatInt, int b, int c){
    //formula
    //a*a=(b*b)+(c*c)
    int lhs = (greatInt*greatInt);
    int rhs = ((b*b)+(c*c));

    if(lhs==rhs){
        cout<<"Pythagorean Triplets";
    }else{
        cout<<"Non-Pythagorean Triplets";
    }
    return 0;
};

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int gret = great(a,b,c);
    if(gret==a){
        pytha(a,b,c);
    }else if(gret == b){
        pytha(b,a,c);
    }else{
        pytha(c,a,b);
    }

    return 0;

}
 