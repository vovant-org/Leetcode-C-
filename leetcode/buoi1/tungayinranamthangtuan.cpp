#include <iostream>
using namespace std;
int main(){
	int ngay;
	cin >> ngay;
	int nam = ngay / 365;
	int du = ngay % 365;
	int tuan = du/7;
	int day = du % 7;
	cout << nam <<" "<<tuan<< " "<<day<<endl;
	return 0;
}
