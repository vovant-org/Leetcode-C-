#include <iostream>
using namespace std;

int main(){
	int a = 500, b = 200;
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	float thuong = (float)a / b;//muon chia ra so co phan thap phan ta ep mot trong hai so a hoac b hoac ca hai thanh dang float
	// hoac nhan voi mot so thap phan co the la 1.0
	int chiadu = a % b;
	cout << tong << " " << hieu << " " << tich << " " << thuong << " " << chiadu << endl;
	return 0;
}
