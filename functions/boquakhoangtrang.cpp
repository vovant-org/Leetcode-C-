#include <iostream>
using namespace std;

int myAtoi(char s[]) {
    int i = 0, sign = 1, result = 0;

    // B? qua kho?ng tr?ng
    while (s[i] == ' ') i++;

    // Ki?m tra d?u
    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    // B? qua s? 0 ? d?u
    while (s[i] == '0') i++;

    // Ð?c các ch? s? cho d?n khi g?p ký t? không ph?i s?
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return sign * result;
}

int main() {
    char s[] = "-012034.56";
    cout << myAtoi(s);  // K?t qu?: 1234
    return 0;
}

