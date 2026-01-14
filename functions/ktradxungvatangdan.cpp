#include <iostream>
using namespace std;
bool isAscending(int arr[], int n){
	for (int i = 0; i < n; i++){
		if (arr[i] < arr[i++]) return true;
	}
	return false;
}
bool isSymmetric(int arr[], int n){
	for (int i = 0; i < n/2; i++){
		if ( arr[i] == arr[n-1-i]) return true;
	}
	return false;
}
int main(){
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0 ; i < n; i++){
		cin >> arr[i];
	}
	if (isAscending(arr, n))
        cout << "Array is ascending.\n";
    else
        cout << "Array is NOT ascending.\n";

    if (isSymmetric(arr, n))
        cout << "Array is symmetric.\n";
    else
        cout << "Array is NOT symmetric.\n";

    return 0;
}
