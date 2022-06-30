#include <iostream>
using namespace std;
 
void hashfunction(int mytable[], int myarr[], int h)
{ 
    int numberofcollision = 0;
    for (int z = 0; z < h; z++) 
    {
        int d = myarr[z] % 10; 

        if (mytable[d] == -1){ 
            mytable[d] = myarr[z];
        }

        else 
        {
            numberofcollision ++;
            

            for (int x = 0; x < 10; x++){
                int t = (d + x * x) % 10; 
                if (mytable[t] == -1)
                {
                    mytable[t] = myarr[z]; 
                    break;
                }
            }
            cout << "collision number " << numberofcollision << endl; 
        }
    }

    for (int z = 0; z < 10; z++)
    {
        cout << mytable[z] << " ";
    }
}
 
int main()
{
    int arr[] = {5, 40, 18, 22, 28, 38, 48, 20, 8};
    int W = 10;
    int hashtable[10];
 
    for (int z = 0; z < 10; z++)
    {
        hashtable[z] = -1;
    }
    hashfunction(hashtable, arr, W);

}
