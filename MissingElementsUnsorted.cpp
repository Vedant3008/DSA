#include <iostream>
#include <vector>
using namespace std;

class MissingEl{
    private:
        vector<int> elements;

    public:

        MissingEl(vector<int> nums) {
            elements = nums;
        }

        void findMissingEl(){
            int low=1;
            int high=12;
            vector<int> elements2(high + 1, 0);
            for(int i=0; i<elements.size(); i++){
                elements2[elements[i]]=1;
            }
            cout << "Missing elements: "<<" ";
            for(int i=low; i<=high; i++){
                if(elements2[i]==0){
                    cout<<i<<" ";
                }
            }
        }
};

int main(){
    vector<int> nums = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    MissingEl m(nums);
    m.findMissingEl();
    return 0;
}