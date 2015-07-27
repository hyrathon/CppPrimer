#include <iostream>
#include <string>



using namespace std;

int main(){
	string s;
	while(getline(cin, s)){
		for(int i = 0; i < s.size(); i++)
			s[i] = 'X';
		cout << s << endl;
	}
}
