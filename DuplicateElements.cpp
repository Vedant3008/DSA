#include <iostream>
#include <vector>
using namespace std;

class DuplicateEl{
    private:
        vector<int> arr;

    public:
        DuplicateEl(){
            arr = {3,4,5,5,5,6,6,7,8,8};
        }

        void findingDuplicate(){
            int lastDuplicate = 0;
            for(int i=0; i<arr.size()-1; i++){
                if(arr[i]==arr[i+1] && arr[i]!= lastDuplicate){
                    cout<<"Duplicate value: "<<arr[i]<<endl;
                    lastDuplicate = arr[i];
                }
            }
        }

        void countDuplicate(){
            int j;
            for(int i=0; i<arr.size()-1; i++){
                if(arr[i]==arr[i+1]){
                    j=i+1;
                    while(j < arr.size() && arr[j] == arr[i]){
                        j++;
                    };
                    cout<<arr[i]<<" is repeating "<<j-i<<" times"<<endl;
                    i=j-1;
                }
            }
        }

        void findDuplicateHash(){
            int maxVal = *max_element(arr.begin(), arr.end());
            vector<int> arr2(maxVal + 1, 0);
            for(int i=0; i<arr.size(); i++){
                arr2[arr[i]]++;
            };
            for(int i=0; i<arr2.size();i++){
                if(arr2[i]>1){
                    cout<<"Duplicate Element "<<i<<" is repeating "<<arr2[i]<<" times"<<endl;
                }
            };
        }
};

int main(){
    DuplicateEl D;
    D.findingDuplicate();
    D.countDuplicate();
    D.findDuplicateHash();
}