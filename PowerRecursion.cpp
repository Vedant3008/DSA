#include<iostream>
using namespace std;

int pwr(int n, int m){
    if(m==0){
        return 1; 
    }
    return n*pwr(n,m-1);
}

int main(){
    int result = pwr(2,3);
    cout<<result;
}