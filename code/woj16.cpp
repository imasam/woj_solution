#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int x, y, max, min;
		set<pair<int, int>> position;
		cin >> x >> y;
		max = min = y;
		position.insert(make_pair(x, y));
		for (int i = 0; i < n-1; i++)
		{
			cin >> x >> y;
			position.insert(make_pair(x, y));
			if (y > max)
				max = y;
			if (y < min)
				min = y;
		}
		int sum = max + min;
		bool flag = true;	
		auto it = position.begin();
		for (; it != position.end(); it++)
			if (position.find(make_pair((*it).first, sum - (*it).second)) == position.end())
				break;
		if (it == position.end())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}