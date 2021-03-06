#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	while (cin >> t)
	{
		for (int i = 0; i < t; i++)
		{
			int n;
			cin >> n;
			vector<int> s(n), result(n);
			cin >> s[0];
			result[0] = s[0];
			for (int j = 1; j < n; j++)
			{
				cin >> s[j];
				result[j] = s[j] - s[j - 1];
			}
			sort(result.begin(), result.end());
			cout << "Case " << i + 1 << ":" << endl;
			for (int j = 0; j < n; j++)
				cout << result[j] << " ";
			if (i != t - 1)
				cout << endl << endl;;
		}
	}
    return 0;
}