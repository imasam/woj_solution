#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (cin >> s && s == "START" && s != "ENDOFINPUT")
	{
		string cipher, end;
		getchar();
		getline(cin, cipher);
		for (int i = 0; i < cipher.length(); i++)
			if (cipher[i] >= 'A' && cipher[i] <= 'Z')
			{
				cipher[i] -= 5;
				if (cipher[i] < 'A')
					cipher[i] += 26;
			}
		cin >> end;
		cout << cipher << endl;
	}
    return 0;
}