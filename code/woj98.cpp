#include <iostream>
#include <string>
using namespace std;

int count(string text, string name)
{
	int count = 0;
	int max = count;
	for (int i = 0; i < text.length(); i++)
	{
		int j;
		for (j = 0; j < name.length(); j++)
			if (text[i + j] != name[j])
			{
				count = 0;
				break;
			}
		if (j == name.length())
		{
			count++;
			i = i - 1 + name.length();
		}
		if (max < count)
			max = count;
	}
	return max;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string text;
		cin >> text;
		if (count(text, "dongfangxu") >= count(text, "zap"))
			cout << "dongfangxu!" << endl;
		else
			cout << "zap!" << endl;
	}
    return 0;
}