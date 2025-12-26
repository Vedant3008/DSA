#include<iostream>
#include<vector>
using namespace std;

class MaxMin{
    private:
        vector<int> A;

    public:
        MaxMin(){
            A = {5,8,3,9,6,2,10,7,-1,4};
        }

        void findMaxMin(){
            int min = A[0];
            int max = A[0];
            for(int i=1; i<A.size(); i++){
                if(A[i]<min){
                    min = A[i];
                }
                else if(A[i]>max){
                    max = A[i];
                }
                else{
                    continue;
                }
            }
            cout<<"Minimum is: "<<min<<endl;
            cout<<"Maximum is: "<<max<<endl;
        }
};

int main(){
    MaxMin MM;
    MM.findMaxMin();
}