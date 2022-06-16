#include <iostream>
using namespace std;
int combinations(int number) {
    if (number == 1) {
        return 1;
    }
    return number * combinations(number - 1);
}
int main()
{
    
    int n;
    do
    {
        cin >> n;
    } while (n < 2 || n > 22);
    cout << combinations(n - 1);
}