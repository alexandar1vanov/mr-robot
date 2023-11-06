#include <iostream>
using namespace std;
int main () {
    int broj, suma, tmp, max=0;

    while(cin>>broj) {

        tmp = broj;
        suma = 0;
        while (tmp) {              //123    //12       //1        //0
            suma = suma + tmp % 10;        //0 + 3  //3 + 2    //5 + 1    //6
            tmp /= 10;                 //12     //1        //0        //0
        }

        cout << broj << ": " << suma + max << endl;

        tmp = broj;             //321
        max = tmp % 10;         //1
        while (tmp) {                  //321
            if (max < tmp / 10 % 10)   //1 < 2
                max=tmp/10%10;         //max = 2
        tmp/=10;     //32
        }

    }
    return 0;
}
