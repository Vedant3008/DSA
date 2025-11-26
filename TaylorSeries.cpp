#include<iostream>
#include<stdio.h>
using namespace std;

double ts(int x, int n){
    static double p=1, f=1;
    double r;
    if (n==0){
        return 1;
    }
    r=ts(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

int main(){
    int x = 4;
    int n = 10;
    double result=ts(x,n);
    cout<<result;
    return 0;
}