#include <iostream>
#include <string>

using namespace std;

void lower_case(string str){
	int len = str.length();
	
	for(int i = 0; i<len; i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i] += 32;
		}
	}
	cout<<"With Lower Case Characters: "<<str<<endl;
	return;
}

void upper_case(string str){
	int len = str.length();
	
	for(int i = 0; i<len; i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i] -= 32;
		}
	}
	cout<<"With Upper Case Characters: "<<str<<endl;
	return;
}

int main(){
	string str;
	cout<<"Input A String: ";
	getline(cin, str);

	char opt;
	cout<<"(a)To Lower Case"<<endl;
	cout<<"(b)To Upper Case"<<endl;
	cout<<"Option: ";
	cin>>opt;

	if(opt=='a'){
		lower_case(str);
	}else if(opt=='b'){
		upper_case(str);
	}else{
		cout<<"Invalid Input!!"<<endl;
	}

	return 0;
}

