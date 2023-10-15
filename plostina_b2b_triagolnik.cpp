#include <iostream>
#include <math.h>
using namespace std;
 
 
    void ploshtina(float a, float b){
        float rezultat;
        rezultat = a * b / 2;
        cout << "Ploshtinata na triagolnikot e " << rezultat << endl;
    }
 
    int main() {
 
        ploshtina(10, 5);
 
    return 0;
}
