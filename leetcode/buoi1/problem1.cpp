#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a, b;
	cout << "Enter a, b : ";
	cin >> a >> b;
	int c = a/b;
	long long tich = (long long) a * b;// or 1ll*a*b
	float d = float(a%b);
	cout << c << " " << tich << " " << fixed << setprecision(2) << d << endl;
	return 0;
}
