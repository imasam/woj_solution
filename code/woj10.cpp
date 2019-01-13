#include <iostream>
using namespace std;

int main()
{
	int n, max;
	int set[1000], result[1000];
	int count = 0;

	while (cin >> n)
	{
		if (n <= 0 || n > 1000)
			break;
		for (int i = 0; i < n; i++)
			cin >> set[i];

		max = set[0];
		for (int i = 1; i < n; i++)
			if (set[i] > max)
				max = set[i];

		while (max < 0)
		{
			max %= 2006;
			max += 2006;
		}

		for (int i = 1; i < n; i++)
		{
			max *= 2;
			max %= 2006;
		}

		result[count++] = max;
	}
	for (int i = 0; i < count; i++)
		cout << result[i] << endl;
    return 0;
}

