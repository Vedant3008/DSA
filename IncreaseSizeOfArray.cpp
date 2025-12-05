#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int *A, *B;
    A = new int[5];
    A[0] = 1, A[1] = 3, A[2] = 4, A[3] = 5, A[4] = 6;
    for(int i=0; i<5; i++){
        cout<<A[i];
    } 

    B = new int [10];
    for(int i=0; i<5; i++){
        B[i]=A[i];
    }
    delete[] A;

    B[6] = 98;
    A=B;

    for (int i=0; i<10; i++){
        cout<<A[i];
    }
    return 0;
}

