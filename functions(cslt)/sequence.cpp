#include <iostream>
using namespace std;
void sequence(){
	int n, k = 0;
	cout << "Enter the number: ";
	cin >> n;
	cout << "The sequence: " << n;
	while (n > 1){
		if ( n % 2 == 0){
			n /= 2;
			cout << ", " << n;
			k++;
		}
		else{
			n = 3*n + 1;
			cout << ", " << n;
			k++;
		}
	}
	cout << endl;
	cout << "k = " << k << endl;
}
int main(){
	sequence();
	return 0;
}
