#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		if (n == 1)
			break;
		else if (n == 2)
			cout << 1 << endl;
		else if (n == 3)
			cout << 3 << endl;
		else
			cout << 2 * n - 4 << endl;
	}
    return 0;
}