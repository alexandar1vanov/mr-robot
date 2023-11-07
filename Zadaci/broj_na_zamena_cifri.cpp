//vnesen e broj
//poslednata i prvata cifra da si gi zamenat mestata
//in:2357
//out:7352
#include <iostream>

using namespace std;

int main() {

    int br, temp, prva, posledna, krajna, count = 0, power_of_10 = 1;
    cout << "Vnesi broj: ";
    cin >> br;
    temp = br;
    while (br != 0) {
        br /= 10;
        count++;
    }
    for (int i = 1; i < count; i++)
        power_of_10 = power_of_10 * 10;

    int sredina = (temp % power_of_10) / 10;

    prva = temp / power_of_10;
    posledna = temp % 10;

    krajna = (posledna * power_of_10) + (sredina * 10) + prva;

    cout << krajna << endl;
    return 0;
}
