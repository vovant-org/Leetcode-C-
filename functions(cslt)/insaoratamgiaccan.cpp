#include <iostream>
using namespace std;
void printTriangle(int h){
	for (int i = 1; i <= h; i++){
		// in khoang trang
		for (int j = 1; j <= h-i; j++){
			cout << " ";
		}
		for (int k = 1; k <= 2*i - 1; k++){
			cout << "*";
		}
		cout << endl;
	}
}
int main(){
	int h;
	cin >> h;
	printTriangle(h);
	return 0;
}
