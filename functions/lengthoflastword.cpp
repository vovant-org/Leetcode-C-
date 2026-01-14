#include <iostream>
using namespace std;
int lengthoflastworld(string s){
	//start at the last index 
	int i = s.length() - 1;
	
	// move to left as long as the current character is a white space
	while( i >= 0 && s[i] == ' ' ){
		i--;
	}
	int j = i;
	// move left as long as the current character is not a white space
	while ( i >= 0 && s[i] != ' '){
		i--;
	}
	return j - i;
}
int main(){
	string s;
	cin >> s;
	cout << lengthoflastworld(s);
}
