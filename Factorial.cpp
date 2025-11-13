#include<iostream>
using namespace std;

int fact(int num){
    if(num==0){
        return 1;
    }
    return fact(num-1)*num;
}

int main(){
    int num = 5;
    cout<<fact(num);
}