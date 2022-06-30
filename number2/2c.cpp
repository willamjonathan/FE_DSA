#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main (void)
{
  queue <char> queue;
  string myname = "WILLIAMJONAT";

  bool palindromecheck = false;

  if (myname.size() > 0)
  {

    for (int i=0; i<13; i++)
    {
      queue.push(myname[i]);
    }

    palindromecheck = true;

    for (int i = 1; i <= 12 && palindromecheck; ++i)
    {
      palindromecheck = queue.front() == myname[myname.size() - i];
      queue.pop();
    }
  }

  if(!palindromecheck)
  {
  	cout<< myname << endl;
    cout<<"NOT A PALINDROME"<<endl;
  }
  else
  {
  	cout<< myname<<endl;
    cout<<"A PALINDROME"<<endl;
  }

}
