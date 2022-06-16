#include <iostream>
using namespace std;


int main()
{
    int num1;
    cout << "Enter a number from 100-999:";
    cin >> num1;
    int N = (num1 / 100) + (num1 / 10 % 10);
    int M = (num1 / 100) + (num1 % 10);
    int num2 = num1;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(num2 % 5 == 0)
            {
                num2 = num2 - (num1 / 100);
                cout << num2 << " ";
            }
            else if(num2 % 3 == 0)
            {
                num2 = num2 - (num1 / 10 % 10);
                cout << num2 << " ";
            }
            else
            {
                num2 = num2 + (num1 % 10);
                cout << num2 << " ";
            }
        }
        cout << endl;
    }
    
}
