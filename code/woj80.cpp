#include <iostream>

using namespace std;

int main()
{
	int round;
	cin >> round;
	while (round--)
	{
		int p;
		cin >> p;
		if (p % 14)
			cout << "flymouse wins the game!" << endl;
		else
			cout << "snoopy wins the game!" << endl;
	}
		return 0;
}

