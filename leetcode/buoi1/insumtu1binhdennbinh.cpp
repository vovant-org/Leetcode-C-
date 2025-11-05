#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long sum = 0;
	for( int i = 0; i <=n; i++)
	sum = sum + pow(i,2);
	cout << sum;
	return 0;
}
