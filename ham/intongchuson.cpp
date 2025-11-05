#include <iostream>
using namespace std;
int sum_digit(long long n){
	int sum = 0;
	while (n != 0){
		int i = n % 10;
		sum +=i;
		n /= 10;
	}
	return sum;
}
int main(){
	long long n;
	cin >> n;
	cout << sum_digit(n) << endl;
	return 0;
}
