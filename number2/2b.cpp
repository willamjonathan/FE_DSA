#include <iostream>
#include <string>
#include <stack>
using namespace std;
void reversing(string &thestr)
{
    stack<int> mystack;
 
    for (char c: thestr) {
        mystack.push(c);
    }
    for (int i = 0; i < 13; i++)
    {
        thestr[i] = mystack.top();
        mystack.pop();
    }
}
int main()
{
    string mystr = "WILLIAMJONAT ";
    reversing(mystr);
    cout << mystr;
}
