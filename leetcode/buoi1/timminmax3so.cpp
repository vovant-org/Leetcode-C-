#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int max = a, min = a;//ban dau coi nhu min va max deu co gia tri la a
	if (b<min)min=b;
	if (c<min)min=c;
	if (b>max)max=b;
	if (c>max)max=c;
	cout << max << " " << min << endl;
	return 0;
}
