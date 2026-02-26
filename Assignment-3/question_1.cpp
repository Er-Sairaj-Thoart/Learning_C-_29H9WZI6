#include <iostream>
using namespace std;

void printHello(int n) {
    for(int i = 0; i < n; i++)
        cout << "Hello\n";
}

int main() {
    printHello(3);
    return 0;
}