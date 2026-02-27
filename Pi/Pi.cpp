#include <iostream>
#include "BigNumber.cpp"
#include <string>

using namespace std;

int main()
{
	cout << "Enter how big array for storing bytes of pi should be: ";
	long size;
	cin >> size;
	if (size == 0) {
		cout << "Size should be positive!";
		return 1;
	}

	BigNumber bigNumber(size);

	string first = "";
	for (int i = 0; i < size * 8; ++i) {
		first += '1';
	}

	bigNumber.SetBitsFromString(first);

	cout << bigNumber.ToString();

	return 0;
}
