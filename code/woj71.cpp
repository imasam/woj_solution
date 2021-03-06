#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	vector<int> people;
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; i++)
			people.push_back(i + 1);
		int position = 0;
		for (; n > 0; n--)
		{
			position = (position + m - 1) % n;
			cout << people[position] << " ";
			if (people.begin() + position != people.end())
				people.erase(people.begin() + position);
		}
	}
    return 0;
}