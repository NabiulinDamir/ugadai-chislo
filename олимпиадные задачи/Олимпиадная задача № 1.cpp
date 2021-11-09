#include <iostream>
using namespace std;
int j, z, x, a, c;
int y[3];

int main()
{
	setlocale(LC_ALL, "Russian");
	int max = 0;
	cin >> a;
	y[2] = a % 10;
	a /= 10;
	y[1] = a % 10;
	a /= 10;
	y[0] = a;
	while ((y[0] == y[1]) || (y[0] == y[2]) || (y[1] == y[2]))
	{
		cout << '?' << endl;
		cin >> a;
		y[2] = a % 10;
		a /= 10;
		y[1] = a % 10;
		a /= 10;
		y[0] = a;
	}
	for (x = 0; x < 3; x++)
	{
		for (j = 0; j < 3; j++)
		{
			for (z = 0; z < 3; z++)
			{
				if (x == j or x == z or j == z) {
					continue;
				}
				c = y[x] + 10 * y[j] + 100 * y[z];
				cout << c << " ";
				if (c > max)
				{
					max = c;
				}
			}
		}
	}
	cout << endl << "максимальное: " << max;
}

