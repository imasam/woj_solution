#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	while (cin >> n >> k)
	{
		vector<int> num;
		int count = 0;
		while (n--)
		{
			int score;
			cin >> score;
			num.push_back(score);
		}
		sort(num.begin(), num.end());
		auto it = num.begin() + k - 1;
		cout << *it << endl;
	}
    return 0;
}