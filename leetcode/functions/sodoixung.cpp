#include <iostream>
using namespace std;
bool isPalindrome(int x){
    if (x < 0) return false;
    int orginal = x;
    int reversed = 0;
    while (x > 0){
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return orginal == reversed;
}
int main(){
    int x;
    cin >> x;
    if (isPalindrome(x)){
        cout << x << " "<<"is a palinrome";
    }
    else
        cout << x <<" " << "is not a palindrome";
return 0;
}
