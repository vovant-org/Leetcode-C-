#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int celcius;
	cout << "Enter the celcius: ";
	cin >> celcius;
	double farenhai = (float)celcius * 9/5 + 32;
	cout <<  fixed << setprecision(2) << farenhai;
	return 0;
}
