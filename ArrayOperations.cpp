#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

class DynamicArray{
    private:
        int *data;
        int capacity;
        int size;
    
    public:
        DynamicArray(){
            capacity = 8;
            size = 0;
            data = new int[capacity];

            data[0] = 3;
            data[1] = 8;
            data[2] = 5;
            size = 3;
        }

        void Display(){
            cout<<"Elements are: ";
            for(int i = 0; i<size; i++){
                cout<<data[i];
            }
            cout<<endl;
        }

        void Print(){
            cout<<"Size: "<<size<<"\n";
            cout<<"Capacity: "<<capacity<<"\n";
            cout<<"Elements: ";
            for (int i = 0; i < size; i++) {
                cout << data[i]<<" ";
            }
            cout<<endl;
        }

        int Get(int index){
            if(index>=0 && index<size){
                return data[index];
            }
            return 0;
        }

        void Set(int index, int value){
            if(index>=0 and index<size){
                data[index] = value;
            }
            return;
        }

        void Max(){
            int max = data[0];
            for(int i=0; i<size; i++){
                if(data[i]>max){
                    max=data[i];
                }
            }
            cout<<"Maximum of array is: "<< max << endl;
        }

        void Min(){
            int min = data[0];
            for(int i=0; i<size; i++){
                if(data[i]<min){
                    min=data[i];
                }
            }
            cout<<"Minimum of array is: "<< min << endl;
        }

        void Average(){
            double sum = 0;
            for(int i=0; i<size; i++){
                sum+=data[i];
            }
            double avg = sum/size;
            cout<<"Average is: "<<avg<<endl;
        }

        int LinearSearch(int Element){
            for(int i=0; i<size; i++){
                if(data[i] == Element){
                    return i;
                }
            }
            return -1;
        }

        int BinarySearch(int Element){
            int low = 0;
            int high = size-1;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(Element==data[mid]){
                    return mid;
                }
                else if(Element>data[mid]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return -1;
        }

    private:
        void resize(){
            int newCapacity = capacity * 2;
            int *newArray = new int[newCapacity];
            for(int i = 0; i<size; i++){
                newArray[i] = data[i];
            }
            delete[] data;
            data = newArray;
            capacity = newCapacity;
            cout << "Resized! New capacity: " << capacity << endl;
        }

    public:
        void Append(int value){
            if(size == capacity){
                resize();
            }
            data[size] = value;
            size++; 
        }

    public:
        ~DynamicArray(){
            delete[] data;
        }
};

int main(){
    DynamicArray a;
    a.Print();
    cout<<"Required element is: "<<a.Get(2)<<endl;
    a.Set(2,9);
    a.Display();
    a.Max();
    a.Min();
    a.Average();
    cout<<"Index of required element is "<<a.LinearSearch(5)<<endl;
    a.Append(6);
    a.Set(0, 2);   
    a.Set(1, 5);   
    a.Set(2, 8);  
    a.Append(10);  
    a.Append(15);
    a.Display();
    cout << "Search for 8: " << a.BinarySearch(8) << endl;  
    cout << "Search for 2: " << a.BinarySearch(2) << endl;  
    cout << "Search for 15: " << a.BinarySearch(15) << endl;
    cout << "Search for 7: " << a.BinarySearch(7) << endl;
    cout<<"Binary Search result is "<<a.BinarySearch(6)<<endl;
}