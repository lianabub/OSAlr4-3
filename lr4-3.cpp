#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x, a, b, c;
	for (int i = 100; i < 1000; i++)
	{
		x = i;
		a = x / 100;
		x -= a * 100;
		b = x / 10;
		x -= b * 10;
		c = x;
		if (a * c * 2 == b)
		{
			cout << i << endl;
		}
	}
	return 0;
}
