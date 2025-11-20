#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void inputArray(int arr[], int &n){
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
}

void outputArray(int arr[], int n){
	for(int i =0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int sumArray(int arr[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += arr[i];
	}
	return sum;
}

int findMin(int arr[], int n){
	int mn = arr[0];
	for (int i = 0; i < n; i++){
		mn = min(mn, arr[i]);
	}
	return mn;
}

int findIndexOfX(int arr[], int n, int x){
	for ( int i = 0; i < n; i++){
		if ( arr[i] == x) return i;
	}
	return -1;
}

int countOccurrences(int arr[], int n, int x){
	int count = 0;
	for ( int i = 0; i < n; i++)
		if (arr[i] == x) count++;
	return count;
}
int checkPrime(int num){
	if ( num < 2) return 0;
	for ( int i = 2; i <= sqrt(num); i++){
		if ( num % i == 0) return 0;	
	}
	return 1;
	
}
int countNumberofPrime(int arr[], int n){
	int count = 0;
	for (int i = 0; i < n; i++){
		if (checkPrime(arr[i])) count++;
	}
	return count;
}
int isAscendingOrder(int arr[], int n){
	for ( int i = 1; i < n; i++){
		if (arr[i] < arr[i-1]) return 0;
	}
	return 1;
}
void removeElements(int arr[], int &n, int x){
	int k = 0;
	for ( int i = 0; i < n; i++){
		if (arr[i] != x){
		 	arr[k] = arr[i];
			k++;
		}
	}
	n = k;
}
void removeElementsFromIndex(int arr[], int &n, int idx, int num_del){
	for ( int i = idx; i + num_del < n; i++)
		arr[i] = arr[i + num_del];
	n -= num_del;
	if (n < 0) n = 0;
}
void concatTwoArrays( int a[], int na, int b[], int nb, int c[], int &nc){
	nc = 0;
	for ( int i = 0; i < na; i++)
		c[nc++] = a[i];
	for ( int i = 0; i < nb; i++)
		c[nc++] = b[i];
}
void interleaveArrays( int a[], int na, int b[], int nb, int c[], int &nc){
	nc = 0;
	int i = 0;
	while ( i < na || i < nb){
		if (i < na)
			c[nc++] = a[i];
		if( i < nb)
			c[nc++] = b[i];
		i++;
}
}
int main(){
    int a[100], b[100], c[200];
    int n, m, nc;

    cout << "=== NHAP MANG A ===\n";
    inputArray(a, n);

    cout << "=== NHAP MANG B ===\n";
    inputArray(b, m);

    cout << "\nMang A: "; outputArray(a, n);
    cout << "Mang B: "; outputArray(b, m);

    cout << "Tong A = " << sumArray(a, n) << endl;
    cout << "Min A = " << findMin(a, n) << endl;
    cout << "So so nguyen to trong A = " << countNumberofPrime(a, n) << endl;
    cout << "A tang dan? " << (isAscendingOrder(a, n) ? "YES" : "NO") << endl;

    int x = 3;
    cout << "Vi tri dau tien cua 3 trong A: " << findIndexOfX(a, n, x) << endl;
    cout << "So lan xuat hien 3 trong A: " << countOccurrences(a, n, x) << endl;

    cout << "\nXoa tat ca phan tu = 3 trong A...\n";
    removeElements(a, n, 3);
    outputArray(a, n);

    cout << "\nNoi A + B: ";
    concatTwoArrays(a, n, b, m, c, nc);
    outputArray(c, nc);

    cout << "Xen ke A va B: ";
    interleaveArrays(a, n, b, m, c, nc);
    outputArray(c, nc);

    return 0;
}

