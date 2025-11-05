// a -> z: 97 -> 122
// A -> Z: 65 -> 90
// 0 -> 9: 48 -> 57
#include <iostream>
using namespace std;
int main(){
	char c; cin >> c;
	cout << int(c)<<endl;//(int)c
	if (c >= 97 && c <= 122)//(c >= 'a')	
	cout << "Yes";
	else if (c >= 65 && c <= 90)
	cout << "No";
	return 0;
}
