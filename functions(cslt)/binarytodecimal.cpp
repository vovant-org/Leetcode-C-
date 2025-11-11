#include <iostream>
#include <cmath>
using namespace std;
int decimaltobinary(string binary){
	int decimalvalue = 0;
	int power = 0;
	for ( int i = binary.length()-1;i >= 0;i--,power++ ){
		char bit = binary[i];
		if (bit == '1'){
			decimalvalue += (int)pow(2,power);
		}	
	}
	return decimalvalue;
}
int main(){
	string binary;
	cin >> binary;
	cout << decimaltobinary(binary);
	return 0;
}
