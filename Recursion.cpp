#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
        cout<<n-1<<endl;
    }
}

int main(){
    int n = 3;
    fun(n);
}