#include<iostream>
using namespace std;

#define MAX 100

int main()
{
	int num, arr[MAX], equli = 0;

	int lefsum, rigsum;

	cout << "Enter Any Number: ";
	cin >> num;

	cout << endl;
	cout << "Enter the array numbers: ";

	for (int i = 0; i < num; i++)
		cin >> arr[i];

	cout << endl;

	while (equli < num)
	{
		lefsum = 0;
		rigsum = 0;

		for (int i = equli - 1; i >= 0; i--)
			lefsum += arr[i];

		for (int j = equli + 1;j < num;++j)
			rigsum += arr[j];


		if (lefsum == rigsum)
		{
			cout << "Equilibrium Point: " << equli << endl;
			break;
		}
		else
		{
			equli++;
		}

	}
}