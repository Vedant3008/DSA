#include <iostream>
using namespace std;

void reverseNum(int num){
    if (num == 0){
        return;
    }
    cout<<num%10;
    reverseNum(num/10);
}

int main(){
    int num = 54321;
    reverseNum(num);
    return 0;
}

