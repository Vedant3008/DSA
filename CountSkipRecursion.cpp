#include<iostream>
using namespace std;

void countSkip(int n){
    if(n==0){
        return;
    }
    if(n%3!=0){
        cout<<n;
    }
    countSkip(n-1);
}

int main(){
    int n=10;
    countSkip(n);
}