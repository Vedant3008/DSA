#include <iostream>
#include <stdio.h>
using namespace std;



int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}
int nCr(int n,int r){
    int numerator, denomenator;

    numerator = fact(n);
    denomenator = fact(r) * fact(n-r);
    return numerator/denomenator;
}

int main(){
    cout<<nCr(5,2);
    return 0;
}


//OR You can make nCr a recursive function itself.

/*int NCR(int n, int r){
    if(n==r || r==0)
        return 1;
    return NCR(n-1, r-1) + NCR(n-1,r);
}
int main(){
    cout<<NCR(5,2)
    return 0;
    }
*/
