#include <iostream>
#include <string>
using namespace std;

class Anagram{
    private:
        string str1;
        string str2;

    public:
        Anagram(){
            str1 = "Listen";
            str2 = "Silent";
        }

        void convertToLower(){
            for(int i=0; i<str1.length(); i++) {
                str1[i] = tolower(str1[i]);
            }
            for(int i=0; i<str2.length(); i++) {
                str1[i] = tolower(str2[i]);
            }
        }

        bool checkAnagram(){
            convertToLower();
            if(str1.length()!=str2.length()){
                return false;
            }
            int freq[26]={0};
            for(int i=0; i<str1.length(); i++){
                int index = str1[i]-'a';
                freq[index]++; 
            }
            for(int i=0; i<str2.length(); i++){
                int index = str2[i]-'a';
                freq[index]--; 
            }
            for(int k=0; k<26; k++){
                    if(arr[k]%2!=0){
                        cout<<"It is not an anagram."<<endl;
                        break;
                    }
                }
                // cout<<"It is an anagram."<<endl;  
            }
        }
};

int main(){
    Anagram a;
    a.checkAnagram();
}