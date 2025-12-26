#include <iostream>
#include <vector>
using namespace std;

class DuplicateEl{
    private:
        vector<int> arr;
    
    public:
        DuplicateEl(){
            arr = {8,9,5,6,3,3,3,1,2,10,10};
        }

        void findDuplicate(){
            for(int i=0; i<arr.size()-1; i++){
                int count = 1;
                if(arr[i]!=-1){
                    for(int j = i+1; j<arr.size(); j++){
                        if(arr[i]==arr[j]){
                            count++;
                            arr[j]=-1;
                        }
                    }
                    if(count>1){
                        cout<<arr[i]<<" is repeating "<<count<<" times"<<endl;
                    }
                }
            }
        }

        void findDuplicateHash(){
            int maxVal = *max_element(arr.begin(), arr.end());
            vector<int> hashVec(maxVal + 1, 0);
            for(int i = 0; i<arr.size(); i++){
                hashVec[arr[i]]++;
            }

            for(int i=0; i<hashVec.size(); i++){
                if(hashVec[i]>1){
                    cout<<i<<" is repeating "<<hashVec[i]<<" times"<<endl;
                }
            }
        }
};

int main(){
    DuplicateEl D;
    //D.findDuplicate();
    D.findDuplicateHash();
}