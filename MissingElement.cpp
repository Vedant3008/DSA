#include<stdio.h>
#include<iostream>
using namespace std;

class MissingEl{
    private:
        int *arr;
        int length;
        int capacity;
    
    public:
        MissingEl(){
            length = 7;
            capacity = 10;
            arr = new int[capacity];
        }

        void setNum(int index, int number){
            if(index<length && number<=15){
                arr[index] = number;
            }
            return;
        }

        void getNum(int index){
            if(index<length){
                cout<<"Required Number is:"<<arr[length];
            }
        }

        void MissingNum(){
            int sum = 0;
            for(int i=0; i<length; i++){
                sum = sum + arr[i];
            }
            int s = (length * (length+1))/2;
            cout<<"Missing Element is:"<<sum-s;
        }

        void MissingNums(){
            int low = 5;
            int diff = low - 0;
            cout<<"Missing Elements are: "<<endl;
            for(int i=0; i<length; i++){
                if(diff!=arr[i]-i){
                    while(diff<arr[i]-i){
                        cout<<diff+i<<endl;
                        diff++;
                    }
                }
            }
        }
};

int main(){
    MissingEl m;
    m.setNum(0,5);
    m.setNum(1,7);
    m.setNum(2,8);
    m.setNum(3,9);
    m.setNum(4,11);
    m.setNum(5,14);
    m.setNum(6,15);
    //m.MissingNum();
    m.MissingNums();
}