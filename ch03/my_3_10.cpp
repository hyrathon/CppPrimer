#include <iostream>
#include <string>
using namespace std;

int main(){
	string s, ns = "";
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		if(!ispunct(s[i]))
			ns += s[i];
	}
	cout << ns <<endl;
	return 0;
}
