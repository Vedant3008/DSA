#include <iostream>
using namespace std;

int countOccurrences(int num, int occurrence){
    if (num==0) return 0;
    int count = (num%10 == occurrence) ? 1 : 0;
    return count + countOccurrences(num/10,occurrence);
}

int main(){
    int num = 50550;
    int occure = 0;
    int result = countOccurrences(num,occure);
    cout<<result;
}
