//chuyen chu cai hoa thanh thuong ta thay chu cai thuong hon chu cai hoa 32 don vi theo bang asci
#include <iostream>
using namespace std;
int main(){
	char c; cin >> c;
	char tran = int(c) + 32;
	if (c >= 'A'&& c <='Z')
	cout << tran;
	else
	cout << c;
	return 0;
}
// if (c >= 'A'&& c <='Z'){
// 		c += 32
//}
// cout << c<< endl; 
