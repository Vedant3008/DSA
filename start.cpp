#include<iostream>
using namespace std;

int main(){
    int A[5];
    A[0]=12;
    A[1]=14;
    A[2]=16;
    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n",A[2]);

    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }

    for(int x:A){
        cout<<x<<endl;
    }
    return 0;

    
}
