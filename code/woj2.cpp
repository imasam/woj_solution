#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	string result[100];
	int count = 0, i = 0;

	while (cin >> s) 
	{
		if (s[0] >= '1' && s[0] <= '9')
		{
			if (s[0] == '1' && s[2] == '1' && s[3] == '\0')
				result[i] = s + " ";
			else
			{
				result[i++] += to_string(count);
				result[i] = s + " ";
				count = 0;
			}
		}
		else if ((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z'))
			count++;
	}
	result[i] += to_string(count);
	for (int j = 0; j <= i; j++)
		cout << result[j] << endl;
	return 0;
}


