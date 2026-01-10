#include <iostream>
#include <string>
using namespace std;

class String{
    private:
        string name = "Vedant";

    public:
        void findLength(){
            int count = 0;
            for(int i=0; name[i] != '\0'; i++){
                count++;
            }
            cout<<"Length of the string is: "<<count<<endl;
        }

        void reverseString(){
            for(int i=0,j=name.length()-1; i<j; i++,j--){
                char temp;
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
            cout<<"Reversed String is: "<<name<<endl;
        }
};

int main(){
    String s;
    s.findLength();
    s.reverseString();
}