#include <iostream>
using namespace std;
bool check(long long n){
	int sum = 0;
	while (n != 0){
		int i = n % 10;
		sum += i;
		n /= 10;
	}
	if(sum % 10 ==8){
		return true;
}
	else{
		return false;
	}		
	}
	
int main(){
	long long x; cin >> x;
	if (check(x) == true){
		cout << "28tech" << endl;
		}
	else{
		cout << "29tech" << endl;
	}
	return 0;
}

