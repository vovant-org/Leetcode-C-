#include<iostream>
using namespace std;
int maxProfit(int price[], int n){
	int minPrice = 10000000;
	int maxProfit = 0;
	for (int i = 0; i < n ; i++){
		if (price[i] < minPrice)
		minPrice = price[i];
		else if ( price[i]- minPrice > maxProfit)
		maxProfit = price[i] - minPrice;
	}
	return maxProfit;
}
int main(){
	int n;
	cout << "Enter the number of days:";
	cin >> n;
	int price[n];
	for (int i = 0 ; i < n; i++ )
	cin >> price[i];
	int result = maxProfit(price, n);
	cout << "Max profit = " << result;
	return 0;
	
	
}

