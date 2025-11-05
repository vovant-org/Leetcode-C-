// TINH TONG S = 2+4+6+8+++...2n
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long res = 1ll * n* (n+1);
	cout << res;
	return 0;
}
