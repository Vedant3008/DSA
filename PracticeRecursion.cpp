#include <iostream>
#include <stdio.h>
using namespace std;

int add(int n){
    if (n==0){
        return 0;
    }
    return add(n/10)+(n%10);
}

int main(){
    int n=235;
    cout<<add(n);
    return 0;
}