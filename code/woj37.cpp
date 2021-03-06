#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		int tmp, sum_c = 0, sum_d = 0;
		vector<int> c(n), d(n), gas;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			sum_c += tmp;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			sum_d += tmp;
			gas.push_back(c[i] - d[i]);
		}
		if (sum_c < sum_d)
			cout << "NO" << endl;
		else
		{
			int size = gas.size(), i, j;
			for (i = 0; i < size; i++)
			{
				if (gas[i] < 0)
					continue;
				int sum = 0;
				for (j = 0; j < size; j++)
				{
					sum += gas[(i + j) % size];
					if (sum < 0)
						break;
				}
				if (j == size)
					break;
			}
			if (i == size)
				cout << "NO" << endl;
			else 
				cout << "YES" << endl;
		}
	}
    return 0;
}