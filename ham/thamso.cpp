#include <iostream>
#define ll long long
using namespace std;

void displaynumber(ll a, ll b, ll c){
	cout << b << " " << a << " " << c << endl;
	ll sum = a + b + c;
	cout << sum << endl;
	cout << "KET THUC!";
}
int main(){
	ll a, b, c;
	cin >> a >> b >> c;
	displaynumber(a, b, c);
	return 0;
}
