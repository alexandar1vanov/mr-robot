#include <iostream>
using namespace std;
int main () {
    int x, broj, tmp, brojac_x=0, brojac;
    cin>>x;

    while(x){
        brojac_x++;
        x/=10;
    }
    while(cin>>broj){
        tmp=broj;
        while(tmp){
            brojac++;
            tmp/=10;
        }
        if(brojac_x==brojac){
            cout<<broj<<endl;
        }
        brojac=0;
    }
    return 0;
}
