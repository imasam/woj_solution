#include <iostream>
using namespace std;

int main()
{
	long n;
	while (cin >> n)
		n == 1 ? cout << 1 << endl : cout << 2 * n - 2 << endl;
    return 0;
}