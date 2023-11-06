#include <iostream>

using namespace std;

int main() {
    int m, n;
    long fact;

    cin >> m >> n;

    for (int i = m + 1; i <= n; i++) {
        fact = 1l;

        for (int j = 1; j <= i; j++) {
            fact = fact * j;
        }
        cout << "Faktoriel od " << i << " e " << fact << endl;

    }
    return 0;
}
