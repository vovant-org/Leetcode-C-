#include <iostream>
using namespace std;
void firstlast(){
	double height;
	double first = 0, last = 0;
	bool firstentered = false;
	while (true){
		cout << "Enter height: ";
		cin >> h;
		if ( h == 0) break;
		if (!firstentered){
			first = h;
			firstentered = true;
		}
		last = h;
	}
	if (firstentered){
		cout << "\nThe height of the first student in the class list: "
             << first << " (m)\n";
        cout << "The height of the last student in the class list: "
             << last << " (m)\n";
	}
	else {
        cout << "No height entered.\n";
    }
}
int main(){
	firstlast();
	return 0;
	
}
