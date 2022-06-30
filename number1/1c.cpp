#include<iostream>
#define MAX 10
#include <stack>
using namespace std;


int main(){
int choice;
stack<int> mystack;
    while(true) {
        cout << "\nOperations performed by Stack\n";
        cout << "\n1.Push the element\n2.Pop the element\n3.Show\n4.End\n";
        cout << "\n\nEnter the choice:";
        cin >> choice;

        switch(choice){
        	case 1: 
                int push;
                cout << "\nEnter element to be inserted to the stack:";
                cin >> push;
                mystack.push(push);
                break;
            case 2: 
                mystack.pop();
                break;
            case 3: 
                while (!mystack.empty()) {
                    cout << ' ' << mystack.top();
                    mystack.pop();
    }
                break;
            case 4: 
                exit(0);

            default: cout << "\nInvalid choice!!\n";
            }
    }
}
