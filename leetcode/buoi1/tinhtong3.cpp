#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	double sn = 1 -1.0/(n+1);
	cout << fixed << setprecision(2) << sn;
	return 0;
}
