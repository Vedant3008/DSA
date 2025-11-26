#include<iostream>
using namespace std;

int pwr(int n, int m){
    if(m==0){
        return 1; 
    }
    return pwr(n,m-1)*n;
}

int main(){
    int result = pwr(2,3);
    cout<<result;
}