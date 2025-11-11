#include <iostream>
using namespace std;

void toBinary() {
    int n;
    cin >> n;
    int bin[32], i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }
    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--)
        cout << bin[j];
}

int main() {
    toBinary();
    return 0;
}
