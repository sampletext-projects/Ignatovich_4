#include <iostream>

using namespace std;

int main()
{
	double A[5];
	double B[5];

	cout << "A: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << i << "] = ";
		cin >> A[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (A[i] >= 0)
		{
			B[i] = 1;
		}
		else
		{
			B[i] = 0;
		}
	}

	cout << "B: ";
	for (int i = 0; i < 5; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
