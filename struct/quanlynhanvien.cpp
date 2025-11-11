#include <iostream>
using namespace std;
struct NhanVien{
	string name, gt, ns, dc, mst, hd;
};
void nhap(NhanVien &a){
	getline(cin, a.name);
	cin >> a.gt;
	cin >> a.ns;
	getline(cin, a.dc);
	cin >> a.mst;
	cin >> a.hd;
	string tmp = "";
	if (a.ns[1] == '/'){
			a.ns = '0' + a.ns;
		}
		if (a.ns[4] == '/'){
			a.ns.insert(3, "0");
		}
}
void in(NhanVien a){
	cout << a.name << " " << a.gt << " " << a.ns << " " << a.mst << " " << a.hd;
}
int main(){
	struct NhanVien A;
	nhap(A);
	in(A);
	return 0;
}
