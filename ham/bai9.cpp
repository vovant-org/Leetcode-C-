#include <iostream>
using namespace std;
bool chua6(int n){
	while (n){
	if ( n%6 == 0){
		return true;
	}
	n /=10;
}
	return false;
}
bool tongchan(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	return tong % 2 == 0;
}
bool chanle(int n){
	int l = 0, c = 0;
	while(n){
		if (n%2==0) ++c;
		else ++l;
		n /= 10;
	}
	return l > c;
}
int main(){
	int a, b;
	cin >> a >> b;
	for (int i=a; i <=b; i++){
		if(chua6(i)&&chanle(i)&&tongchan(i)){
			cout << i << endl;
		}
	}
	return 0;
}
