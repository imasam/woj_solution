#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t, n;
	map<int, int> m;
	cin >> t;
	while (t--)
	{
		int k = 0;
		cin >> n;
		m.clear();
		while (n--)
		{
			int i;
			cin >> i;
			m[i]++;
		}
		for (auto it = m.begin(); it != m.end(); it++)
			if (it->second > k)
				k = it->second;
		cout << k << endl;
	}
    return 0;
}