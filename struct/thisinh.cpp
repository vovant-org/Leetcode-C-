#include <iostream>
#include <iomanip>
using namespace std;
struct Thisinh{
	string ten, ns;
	float a, b, c;
};
void nhap(Thisinh &a){
	getline(cin, a.ten);
	cin >> a.ns;
	cin >> a.a >> a.b >> a.c;
}
void in(Thisinh a){
	cout << a.ten <<" " <<a.ns << " "<< fixed << setprecision(1) << (a.a + a.b + a.c) << endl;
}
int main(){
	struct Thisinh A;
	nhap(A);
	in(A);
	return 0;
}
