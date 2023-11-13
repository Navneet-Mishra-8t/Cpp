#include <iostream>
#include <string>

using namespace std;

void reverse_string(string str, int len){
	int strt = 0;
	int end = (len-1);

	while(strt<end){
		int var = str[strt];
		str[strt] = str[end];
		str[end] = var;
    //You Can also use swap function

		strt = (strt+1);
		end = (end-1);
	}
	
	cout<<"Reversed String: "<<str;

	return;
}

int main(){
	string str;
	cout<<"Word: ";
	getline(cin, str);

	int len = str.length();

	reverse_string(str, len);

	return 0;
}
