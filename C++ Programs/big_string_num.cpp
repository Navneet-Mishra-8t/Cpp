#include <iostream>
#include <string>

using namespace std;

void big_strnum(string num){
	int len = num.length();

	for(int i=0; i<len; i++){
		for(int j=(i+1); j<len; j++){
			if(num[i]<num[j]){
				swap(num[i], num[j]);
			}
		}
	}
	cout<<"Formed Biggest Number: "<<num<<endl;

	return;

}

int main(){
	string str_num;
	cout<<"Numbers: ";
	cin>>str_num;

	big_strnum(str_num);

	return 0;
}
