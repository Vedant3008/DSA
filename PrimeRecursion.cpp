#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i < n; i++){     
        if(n % i == 0) return false;
    }
    return true;
}

void primeReverse(int num){
    if(num==0) return;
    if (isPrime(num%10)){
        cout<<num%10<<" ";
    }
    primeReverse(num/10);
}

int main(){
    int n = 53421;
    primeReverse(n);

}