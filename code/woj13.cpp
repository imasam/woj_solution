#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s, result[100];
	while (cin >> s)
	{
		int count = 0;
		for (int i = 0; i < s.length(); i++)
		{
			string tmp;
			for (int j = 0; j < s.length(); j++)
			{ 
				int t = (i + j) % s.length();
				tmp += s[t % s.length()];
			}
			result[count++] = tmp;
		}
		sort(result, result + s.length());
		cout << result[0] << endl;
	}
    return 0;
}

