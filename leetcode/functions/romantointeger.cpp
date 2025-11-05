#include <iostream>
using namespace std;
int value(char r){
	if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;
    return 0;
}
int romantoint(string s){
	int total = 0;
	for (int i = 0; i < s.size(); i++){
		int cur = value(s[i]);
		int next = value(s[i+1]);
		if ( cur < next ) total -= cur;
		else total += cur;
	}
	return total;
}

int main(){
	string roman;
	cout << "Enter a Roman numberal: ";
	cin >> roman;
	cout << "Integer value: " << romantoint(roman);
	return 0;
	
	
	
}

