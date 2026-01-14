#include <iostream>
using namespace std;

struct Book {
    string type;
    double price;
    int isbn;
};

int main() {
    Book books[3] = {
        {"Fiction", 123.45, 1},
        {"Science", 123.45, 2},
        {"History", 123.45, 3}
    };

    for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << ": "
             << books[i].type << ", "
             << books[i].price << ", "
             << "ISBN " << books[i].isbn << endl;
    }
    return 0;
}
