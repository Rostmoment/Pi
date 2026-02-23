

#include <iostream>
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
	cout << size;
	return 0;
}
