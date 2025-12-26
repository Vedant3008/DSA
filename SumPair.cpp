#include <iostream>
#include <vector>
using namespace std;

class SumPair{
    private:
        vector<int> A;
    
    public:
        SumPair(){
            A = {1,2,3,4,5,6,7,8,9,10};
        }

        void findPair(){
            int target = 10;
            cout<<"Target is: "<<target<<endl;
            for(int i=0, j=A.size()-1; i<j;){
                    if(A[i]+A[j]==target){
                        cout<<"Pair: "<<A[i]<<"+"<<A[j]<<"="<<target<<endl;
                        i++;
                        j--;
                    }
                    else if(A[i]+A[j]<target){
                        i++;
                    }
                    else{
                        j--;
                    }
            }

        }
};

int main(){
    SumPair S;
    S.findPair();
}