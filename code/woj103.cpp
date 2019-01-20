#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int p;
		scanf("%d%%", &p);
		if (p == 100)
			cout << "100.00%" << endl;
		else
			cout << setiosflags(ios::fixed) << setprecision(2)
			<< 100 * 1.0 * p * p / (10000 - 200 * p + 2 * p * p) << "%" << endl;
	}
    return 0;
}