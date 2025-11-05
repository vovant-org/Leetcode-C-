#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Enter the value of x : ";
	cin >> x;
	long long a = x^x^x + 3*x^x + x + 1;
	cout << a;
	return 0;
}
