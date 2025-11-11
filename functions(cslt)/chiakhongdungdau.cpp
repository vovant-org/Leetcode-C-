#include <iostream>
using namespace std;
void division(int a, int b){
	if (b==0){
		cout << "Error: division by zero";
		return;
	}
	int quotient = 0;
	int remainder = a;
	
	while(remainder >=b){
		remainder -= b;
		quotient++;
	}
	cout << "Result: " << quotient
		<<" remainder " << remainder << endl;
	
}
int main(){
	int a,b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	division(a,b);
	return 0;
}
