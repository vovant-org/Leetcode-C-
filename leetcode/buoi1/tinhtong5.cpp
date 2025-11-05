// tinh s(n) = -1 + 2 -3 + 4 - 5 + 6 +....(-1).n
// ta thay voi so le thi mang dau tru, so chan thi la dau cong, voi moi
// cap so chan le ta duoc 1, vay voi n la so chan thi ta duoc s(n)= n/2 , con voi so le ta duoc (n-1)/2- n
#include <iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long sum;
	if (n%2==0)
	sum = n/2;
	else
	sum = (n-1)/2-n;
	cout << sum;
	return 0;
}
