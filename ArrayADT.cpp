#include <iostream>
#include <stdio.h>
using namespace std;


class Array{
    public:
        int *A;
        int size;
        int length;
};

void Display(Array arr){
    cout<<"Elements are:\n";
    for(int i = 0; i<arr.length; i++){
        cout<<arr.A[i]<<"\n";
    }
}

void Add(Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++] = x;
    }
}

void Insert(Array *arr, int index, int x){
    if (arr->length >= arr->size) {
        cout << "No space to insert!\n";
        return;
    }
    if(index>=0 && index<=arr->length){
        for(int i=arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(Array *arr, int index){

    int x = 0;
    if(index>=0 && index<arr->length){
        x = arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main(){
    Array arr;
    cout<<"Enter array size: ";
    cin>>arr.size;
    arr.A= new int[arr.size];
    arr.length = 0;

    cout<<"Enter how many numbers you want to include in an array: ";
    cin>>arr.length;

    cout<<"Enter all elements: \n";
    for(int i=0; i<arr.length; i++){
        cin>>arr.A[i];
    }
    Display(arr);

    cout<<"After append and Insert ";

    Add(&arr,6);

    Insert(&arr, 5, 10);

    Delete(&arr,3);
    Display(arr);
    delete[] arr.A;
    return 0;
}