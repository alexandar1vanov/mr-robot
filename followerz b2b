#include <iostream>
using namespace std;

int main() {

    int BrojNaDirektniSledaci;
    cout << "Vnesete go brojot na direktni sledaci na Robin\n";
    cin >> BrojNaDirektniSledaci;

    int robinFollowers[10];

    cout << "Vnesi gi brojot na sledaci na negovite sledaci\n";
    for (int i = 0; i < BrojNaDirektniSledaci; i++) {
        cin >> robinFollowers[i];
    }

    int sum = BrojNaDirektniSledaci;

    for (int i = 0; i < BrojNaDirektniSledaci; i++) {
        sum += robinFollowers[i];
    }

    cout << "Robin ima tocno : " << sum;

    return 0;
}
