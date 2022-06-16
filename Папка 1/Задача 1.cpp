#include <iostream>
using namespace std;
void copyString(const char* source,char* string)
{
    int i = 0;
    while(source[i])
    {
        string[i] = source[i];
        i++;
    }
    string[i] = '\0';
}
int stringLength(char string[])
{
    int size = 0;
    while(string[size])
    {
        size++;
    }
    return size;
}
int main()
{
    const int SIZE = 50;
    int counter = 1;
    char input[SIZE];
    char firstWord[SIZE];
    char secondWord[SIZE];
    char thirdWord[SIZE];
    int letterCount = 0;
    int end = 1;
    do
    {
        
        cin >> input;
        letterCount = stringLength(input);
        bool sentEnd = input[letterCount-1] >= 'a' && input[letterCount-1] <= 'z' 
            || input[letterCount-1] >= 'A' && input[letterCount-1] <= 'Z' 
            || input[letterCount-1] >= '0' && input[letterCount-1] <= '9';
        if(input[letterCount-1]=='.'||sentEnd==false)
        {
            end = 0;
            input[letterCount - 1] = '\0';
        }
        if(counter==1)
        {
            copyString(input, secondWord);
            counter = 2;
            if (input[letterCount - 1] == '\0')
            {
                cout << secondWord;
            }
        }
        else if(counter==2)
        {
            copyString(input, thirdWord);
            counter = 3;
            if (input[letterCount - 1] == '\0')
            {
                cout <<thirdWord<<" "<<secondWord;
            }
        }
        else if(counter==3)
        {
            counter = 1;
            copyString(input, firstWord);
            cout << firstWord << " " << secondWord << " " << thirdWord << " ";
        }
    } while (end>0);
    return 0;
}