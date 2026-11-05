#include <iostream>

using namespace std;

bool czy_pierwsza(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;

    cin >> n;

    cout << n << endl;

    if (czy_pierwsza(n)) {
        cout << "Pierwsza" << endl;
    } else {
        cout << "Nie pierwsza" << endl;
    }

    return 0;
}

