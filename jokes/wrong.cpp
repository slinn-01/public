#include <iostream>
#include<string>
using namespace std;

bool operator==(string s1, string s2){
	return true;
}

int main(){

	string s1, s2;
	cout << "Please enter first string: ";
	getline (cin, s1);
	cout << "Please enter second string: ";
	getline (cin, s2);
	cout << "output: " << (s1 == s2);

	return 0;
}
