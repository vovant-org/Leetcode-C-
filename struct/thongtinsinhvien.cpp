#include <iostream>
#include <iomanip>
using namespace std;
struct SinhVien{
	string ma;
	string ten, lop, ns;
	float gpa;
};
void nhap(SinhVien &a){
	getline(cin, a.ten);
	cin >> a.lop;
	cin >> a.ns;
	cin >> a.gpa;
	a.ma = "25127148";
	string tmp = "";
	if (a.ns[1] == '/'){
		a.ns = '0' + a.ns;
	}
	if (a.ns[4] == '/'){
		a.ns.insert(3, "0");
	}
}
void in(SinhVien a){
	cout << a.ma << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
}
int main(){
	struct SinhVien A;
	nhap(A);
	in(A);
	return 0;
}
