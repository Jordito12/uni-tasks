#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int T;
    cin >> T;
    int currentStone = 0;
    for (int i = 0; i < T; i++)
    {
        currentStone++;
        if(currentStone == N)
        {
            currentStone *= -1;
        }
    }
    if(currentStone < 0)
    {
        currentStone *= -1;
    }
    cout << currentStone;
}
