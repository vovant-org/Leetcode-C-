#include <iostream>
using namespace std;
struct PhanSo{
	long long tu;
	long long mau;
};
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}

long long gcd (int a, int b){
	while ( b != 0){
		long long temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return a / gcd(a,b) * b;
}

void rutgon (PhanSo &p){
	long long k = gcd(p.tu , p.mau);
	p.tu /= k;
	p.mau /= k;
}
void in(PhanSo p){
	cout << p.tu << "/" << p.mau;
}
PhanSo tong(PhanSo a, PhanSo b){
	long long mc = lcm(a.mau, b.mau);
	a.tu = mc / a.mau * a.tu;
	b.tu = mc / b.mau * b.tu;
	a.tu += b.tu;
	a.mau = mc;
	rutgon(a);
	return a;
}
int main(){
	struct PhanSo p, q;
	nhap(p); nhap(q);
	rutgon(p); rutgon(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
