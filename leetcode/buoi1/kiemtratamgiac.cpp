#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
		if (a >0 && b >0 && c>0 && a+b>c && a+c>b && b+c >a){
			//kiem tra tam giac hop le
			if (a==b && b == c){
				cout << 1;//tam giac deu
			} 
			else if (a==b||b==c||c==a){
				if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
					cout << 4 << endl;//tam giac vuong can
				}
				else{
				cout << 2 << endl;//tam giac can
			}
		}
			else if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
				cout << 3 << endl; //tam giac vuong
			}
			else{
				cout << 5 << endl; //tam giac thuong
			}
			}
		else{
			cout << "Invalid"<< endl;
		}
			return 0;
}

