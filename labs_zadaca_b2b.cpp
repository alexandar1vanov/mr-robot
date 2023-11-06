#include <iostream>
using namespace std;
int main () {
    int a, b, suma=0;

    cin>>a>>b;

    for(int i=a; i<b; i++){

        if(i%3==0){
            suma=suma+i;
        }
    }

    cout<<suma<<endl;
    return 0;
}
