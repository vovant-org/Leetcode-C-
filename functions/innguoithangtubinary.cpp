#include <iostream>
#include <string>
using namespace std;

// Hàm d?m s? bit 1 trong s? nguyên
int oneInBinary(long long x) {
    int count = 0;
    while (x > 0) {
        if (x % 2 == 1) count++;
        x /= 2;
    }
    return count;
}

// Hàm chuy?n s? sang d?ng nh? phân
string bitBinary(long long x) {
    int bin[64], i = 0;
    if (x == 0) return "0";
    while (x > 0) {
        bin[i] = x % 2;
        x /= 2;
        i++;
    }
    string binary = "";
    for (int j = i - 1; j >= 0; j--) {
        binary += to_string(bin[j]);
    }
    return binary;
}

// Hàm xác d?nh ngu?i th?ng
string findWinner(long long n, long long m) {
    int kanon = oneInBinary(n);
    int chisato = oneInBinary(m);

    cout << "\nKanon's number (" << n << ") in binary: " << bitBinary(n)
         << " -> " << kanon << " ones";
    cout << "\nChisato's number (" << m << ") in binary: " << bitBinary(m)
         << " -> " << chisato << " ones\n";

    if (kanon > chisato)
        return "KANON";
    else if (chisato > kanon)
        return "CHISATO";
    else
        return "MANMARU";
}

int main() {
    long long n, m;
    cout << "Enter Kanon's number (n): ";
    cin >> n;
    cout << "Enter Chisato's number (m): ";
    cin >> m;

    cout << "\nResult: " << findWinner(n, m) << endl;
    return 0;
}
