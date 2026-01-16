#include <iostream>
using namespace std;

class LowerTriangular{
    private:
        int *A,n,x;
    
    public:
        LowerTriangular(int n){
            A = new int[n];
            this->n=n;
        }

        void Create(){
            cout<<"Enter Elements: "<<endl;
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    cin>>x;
                    if(i>=j){
                        A[i*(i-1)/2+j-1]=x;
                    }
                }
            }
        }

        int Get(int i, int j){
            if(i>=j){
                return A[i*(i-1)/2+j-1];
            }
            return 0;
        }

        void Set(int i, int j, int c){
            if(i>=j){
                A[i*(i-1)/2+j-1] = c;
            }
        }

        void Display(){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    if(i>=j){
                        cout<<A[i*(i-1)/2+j-1]<<" ";
                    }
                    else{
                        cout<<"0 ";
                    }
                }
                cout<<endl;
            }

        }

        ~LowerTriangular(){
            delete[] A;
        }
};

int main(){
    LowerTriangular l(5);
    l.Create();
    l.Display();
}