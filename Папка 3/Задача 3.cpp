#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    unsigned int previousN;
    cout << "Enter a positive number:";
    cin >> n;
    for (int i = 0; i < (n / 10 + 1); i++)
    {
        cout << "*";
    }
    cout << n << endl;
    while(n!=1)
    {
        previousN = n;
        if(previousN % 2 == 0)
        {
            n = previousN / 2;
            for(int i = 0; i < (n / 10 + 1); i++)
            {
                cout << "*";
            }
            cout << n <<endl;
        }
        else
        {
            n = previousN * 3 + 1;
            for (int i = 0; i < (n / 10 + 1); i++)
            {
                cout << "*";
            }
            cout << n << endl;
        }
    }
    return 0;
}
