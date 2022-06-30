#include<iostream>
#define MAX 10
using namespace std;

int top=-1;
int list[MAX];

class mystack{
	private:
		int size;
		int current_size = 0;
	public:
		//constructor
		mystack(int len) : size(len){}
		void push();
		void pop();
		void display();
		//destructor
		~mystack()
		{
			cout<<"Destructor is called";
		}
				
};


 void mystack::push() {
            int item;
            if(current_size <= size){
                current_size++;
                if(top==MAX-1)
                    cout << "\nOverflow!!\n";
                else {
                    cout << "\nEnter element to be inserted to the stack:";
                    cin >> item;
                    top = top + 1;
                    list[top] = item;
                }
            }else{
                cout << "You cannot input anymore variables into the stack";
            }
        }

void mystack::pop() {
            if(top == -1)
                cout << "\nUnderflow!!\n";
            else
            {
                cout << "\nPopped element: " << list[top] << "\n";
                top=top-1;
            };
        }

void mystack::display() {
            if(top == -1)
                cout << "\nUnderflow!!\n";
            else
            {
                cout << "\nElements present in the stack: \n";
                for(int i = top; i >=0 ;--i)
                    cout << list[i] << "\n";
            }
}


int main(){
 mystack thestack(10);
 int choice;
 while(true) {
 	cout << "\nOperations performed by Stack\n";
 	cout << "\n1.Push the element\n2.Pop the element\n3.Show\n4.End\n";
 	cout << "\n\nEnter the choice:";
 	cin >> choice;

 switch(choice){
 	case 1: 
	 thestack.push();
 	 break;
 	case 2: 
	 thestack.pop();
 	 break;
 	case 3: 
	 thestack.display();
 	 break;
 	case 4: 
	 exit(0);

 default: cout << "\nInvalid choice!!\n";
 }
 }
}
