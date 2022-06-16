#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	cout << "Enter a number:";
	cin >> n;
	while (n > 0)
	{ 
		if(n<=3)
		{
			n--;
			cout << "I";
		}
		else if(n==4)
		{
			n = 0;
			cout << "IV" << endl;
		}
		else if(n>=5&&n<9)
		{
			n -= 5;
			cout << "V";
		}
		else if(n==9)
		{
			n = 0;
			cout << "IX"<<endl;
		}
		else if(n>=10&&n<40)
		{
			n -= 10;
			cout << "X";
		}
		else if(n>=40&&n<50)
		{
			n -= 40;
			cout << "XL";
		}
		else if(n>=50&&n<90)
		{
			n -= 50;
			cout << "L";
		}
		else if(n>=90&&n<100)
		{
			n -= 90;
			cout << "XC";
		}
		else if(n>=100&&n<400)
		{
			n -= 100;
			cout << "C";
		}
		else if(n>=400&&n<500)
		{
			n -= 400;
			cout << "CD";
		}
		else if(n>=500&&n<900)
		{
			n -= 500;
			cout << "D";
		}
		else if(n>=900&&n<1000)
		{
			n -= 900;
			cout << "CM";
		}
		else
		{
			cout << "M" << endl;
		}
	}
	return 0;
}

