#include<iostream>
using namespace std;

int main() {
	int array[3000];
	int t, n;
	int i, j, count;
	cin >> t;
	while (t--) {
		cin >> n;
		count = 0;
		for (i = 0; i < n; i++)
			cin >> array[i];
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if (array[i] > array[j])
					count++;
		cout << count << endl;
	}
	return 0;
}
