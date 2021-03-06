#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> arr;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			arr.push_back(tmp);
		}
		sort(arr.begin(), arr.end());
		int result = -1;
		for (int last = n - 1; last >=0 && result == -1; last--)
		{
			int i = 0, j = last - 1;
			while (i < j)
			{
				if (arr[i] + arr[j] == arr[last])
				{
					result = arr[last];
					break;
				}
				else if (arr[i] + arr[j] < arr[last])
					i++;
				else
					j--;
			}
		}
		cout << result << endl;
	}
    return 0;
}