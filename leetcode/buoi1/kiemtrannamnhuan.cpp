#include <iostream>
using namespace std;
int main(){
	int year;
	cout << "Enter years: ";
	cin >> year;
	if (year <= 0){
	cout << "Invalid" << endl;}
	else{
	if ((year%400==0)||(year%4==0 && year%100!=0)){
	cout << "Yes"; 
}
	else
	cout << "No";
}
	return 0;
}
