#include <iostream>
using namespace std;
struct phanso{
	int tuso;
	int mauso;
};
void nhap(phanso &p){
	cin >> p.tuso >> p.mauso;
}
int gcd (int a, int b){
	while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
void rutgon(phanso &p){
	int k = gcd(p.tuso, p.mauso);
	p.tuso /= k;
	p.mauso /= k;
}
void in(phanso p){
	cout << p.tuso << "/" << p.mauso;
}
int main(){
	struct phanso p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
