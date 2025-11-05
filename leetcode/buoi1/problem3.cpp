#include <iostream>
using namespace std;
int main(){
	int a, b , c;
	cout << "Enter a,b,c: ";
	cin >> a >> b >> c;
	int i = a * (b+c) + b*(a+c);
	cout << i;
	return 0;
}
