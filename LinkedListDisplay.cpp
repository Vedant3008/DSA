#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList{
    public:
        Node* head;
        LinkedList(){
            head = nullptr;
        }

        void insertAtEnd(int value){
            Node* newNode = new Node(value);
            if(head == nullptr){
                head = newNode;
            }
            else{
                Node* temp = head;
                while (temp->next != nullptr){
                    temp = temp->next; 
                }
                temp->next = newNode;
            }
        }

        void deleteByValue(int value){
            if(head==nullptr){
                return;
            }
            if(head->data == value){
                Node* temp = head;
                head = head -> next;
                delete temp;
                return;
            }
            Node* temp = head;
            while(temp->next && temp->next->data != value){
                temp = temp->next;
            }
            if(temp->next){
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next; 
                delete nodeToDelete;
            }
        }

        void display(){
            Node* temp = head;
            while(temp != nullptr){
            cout << temp->data << "->";
            temp = temp->next;
            }
            cout << "NULL" <<endl;
        }

        void displayReverse(Node* temp){
            if(temp != nullptr){
                displayReverse(temp -> next);
                cout<<temp->data<<endl;
            }
        }

        int Count(Node* temp){
            int count = 0;
            while(temp!=nullptr){
                count++;
                temp=temp -> next;
            }
            return count;
        }

        int RecursiveCount(Node* temp){
            if(temp!=nullptr){
                return RecursiveCount(temp->next)+1;
            }
            return 0;
        }

        int Sum(Node* temp){
            int sum=0;
            while(temp!=nullptr){
                sum = sum+temp->data;
                temp = temp->next;
            }
            return sum;
        }

        int SumRecursion(Node* temp){
            if(temp!=nullptr){
                return SumRecursion(temp->next)+temp->data;
            }
            return 0;
        }

        int MaxNum(Node* temp){
            int max=INT_MIN;
            while(temp!=nullptr){
                if(temp->data>max){
                    max=temp->data;
                    temp=temp->next;
                }
            }
            return max;
        }

        int RMaxNum(Node* temp){
            int max = INT_MIN;
            if(temp!=nullptr){
                max=RMaxNum(temp->next);
                return max>temp->data ? max : temp->data;
            }
            return max;
        }

        ~LinkedList() {
            Node* temp;
            while (head) {
                temp = head;
                head = head->next;
                delete temp;
            }
        }
};

int main() {
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    cout << "Linked List: ";
    list.display();

    cout<<"Total Nodes: "<<list.Count(list.head)<<endl;
    cout<<"Recursive Total Nodes: "<<list.RecursiveCount(list.head)<<endl;
    cout<<"Sum is:"<<list.Sum(list.head)<<endl;
    cout<<"Recursion Sum is: "<<list.SumRecursion(list.head)<<endl;
    cout<<"Maximum number is: "<<list.MaxNum(list.head)<<endl;
    cout<<"Recursive Maximum number is: "<<list.RMaxNum(list.head)<<endl;

    cout << "Reverse Linked List: "<<endl;
    list.displayReverse(list.head);

    list.deleteByValue(20);

    cout << "After Deleting 20: ";
    list.display();

    return 0;
}

