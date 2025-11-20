#include <iostream>
#include <cmath>
using namespace std;
void input2dArray(int arr[][100], int m, int n){
	for ( int i = 0 ; i < m; i++){
		for ( int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
}

void output2dArray(int arr[][100], int m, int n){
	for ( int i = 0; i < n; i++){
		for ( int j = 0; j < n; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
}
int sumArray(int arr[][100], int m, int n){
	int sum = 0;
	for ( int i = 0; i < m; i++){
		for ( int j = 0; j < n; j++){
			sum += arr[i][j];
		}
	}
	return sum;
}

int sumDiagonal( int arr[][100], int m, int n){
	int sum = 0;
	int k = min(m,n);
	for ( int i = 0; i < k; i++){
		sum += arr[i][i];
	}
	return sum;
}
int findMin(int arr[][100], int m, int n){
	int mn = arr[0][0];
	for ( int i = 0; i < m; i++){
		for (int j = 0 ; j < n; j++){
			mn = min(mn, arr[i][j]);
		}
	}
	return mn;
}

int countOccurrences(int arr[][100], int m, int n, int x){
	int count = 0;
	for ( int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (arr[i][j] == x); count++;
		}
	}
	return count;
}
int isPrime(int x){
	if ( x < 2) return 0;
	for ( int i = 2; i <= sqrt(x); i++){
		if ( x % i == 0 ) return 0;
	}
	return 1;
}
int countNumberofPrime(int arr[][100], int m, int n){
	int count = 0;
	for ( int i = 0; i < m; i++){
		for ( int j = 0; j < n; j++){
			if (isPrime(arr[i][j])) count++;
	}
}
return count;
}

void removeElements(int arr[][100], int &m, int &n, int x){
	bool removeRow[100] = {false};
	bool removeCol[100] = {false};
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if ( arr[i][j] == x){
				removeRow[i] = true, removeCol[j] = true;
			}	
		}
	}
	int temp1[100][100];
	int newM = 0;
	for ( int i = 0; i < m; i++){
		if(!removeRow[i]){
			for (int j = 0; j < n; j++){
				temp1[newM][j] = arr[i][j];
			}
			newM++;
		}
	}
	int temp2[100][100];
	int newN = 0;
	for ( int j = 0; j < n; j++){
		if (!removeCol[j]){
			for ( int i = 0; i < newM; i++){
			temp2[i][newN] = temp1[i][j];
		}
		newN++;
	}
	}
	for ( int i = 0; i < newM; i++){
		for ( int j = 0; j < newN; j++){
			arr[i][j] = temp2[i][j];
		}
	}
	m = newM;
	n = newN;
}
int main(){
    int m = 3, n = 3;
    int a[100][100];

    input2dArray(a, m, n);

    cout << "\nMa tran vua nhap:\n";
    output2dArray(a, m, n);

    cout << "\nTong cac phan tu: " << sumArray(a, m, n) << endl;
    cout << "Tong duong cheo: " << sumDiagonal(a, m, n) << endl;
    cout << "Min = " << findMin(a, m, n) << endl;

    int x = 5;
    cout << "So lan xuat hien 5 = " << countOccurrences(a, m, n, x) << endl;

    cout << "So nguyen to trong ma tran = " << countNumberofPrime(a, m, n) << endl;

    cout << "\nXoa hang/cot co chua 5...\n";
    removeElements(a, m, n, 5);

    output2dArray(a, m, n);

    return 0;
}
