#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int year;
    cout << "Enter year:";
    cin >> year;
    int evenDaysCount = 0;
    int oddDaysCount = 0;
    const int leapYearPrimeDays = 10;
    const int notLeapYearPrimeDays = 9;
    double average;
    for (int i = 1; i <= 29; i++)
    {
        if (i % 2 == 0)
        {
            evenDaysCount++;
        }
        else
        {
            oddDaysCount++;
        }
    }
    if(year%4==0||(year%100==0&&year%400==0))
    {
        evenDaysCount -= 1;
        oddDaysCount -= 9;
        average = (leapYearPrimeDays * 2 + evenDaysCount * 2.99 + oddDaysCount * 3) / 29;
        average = round(average * 1000) / 1000;
        cout << average;
    }
    else
    {
        evenDaysCount -= 1;
        oddDaysCount -= 8;
        average = (notLeapYearPrimeDays * 2 + evenDaysCount * 2.99 + oddDaysCount * 3) / 28;
        average = round(average * 1000) / 1000;
        cout << average;
    }
    return 0;
}