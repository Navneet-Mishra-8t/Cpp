#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

/*
string[3]==space;
erase(3, 1)
*/

void del_space(string str){
	int len = str.length();

	for(int i=0; i<len; i++){
		if(str[i]==' '){
			str.erase(i, 1);
		}
	}

	cout<<"String Without Spaces: "<<str;
	return;
}

int main(){
	string str;
	cout<<"Input A String: ";
	getline(cin, str);

	del_space(str);

	return 0;
}
