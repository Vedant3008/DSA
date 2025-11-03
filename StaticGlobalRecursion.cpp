#include <iostream>
using namespace std;

int recursion(int n){
    static int x = 1;
    if(n>0){
        recursion(n-1) + n;
        cout<<n;
    }
    x++;
    return 0;
}

int main(){
    int r;
    r=recursion(5);
    cout<<r;
    return 0;
}