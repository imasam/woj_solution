#include <iostream>
#include <string>
using namespace std;

struct info
{
	string name;
	int generation;
	int age;
};

struct result
{
	string ancestor;
	string age;
};

int main()
{
	info member[13] =
	{ { "Adam",1,930 },
	{ "Seth",2,912 },
	{ "Enosh",3,905 },
	{ "Kenan",4,910 },
	{ "Mahalalel",5,895 },
	{ "Jared",6,962 },
	{ "Enoch",7,365 },
	{ "Methuselah",8,969 },
	{ "Lamech",9,777 },
	{ "Noah",10,NULL },
	{ "Shem",11,NULL },
	{ "Ham",11,NULL },
	{ "Japheth",11,NULL }
	};
	string name1, name2;
	info info1, info2;
	result result[1000];
	int count = 0;
	while (cin >> name1 >> name2)
	{
		for (int i = 0; i < 13; i++)
		{
			if (member[i].name == name1)
			{
				info1 = member[i];
				break;
			}
		}
		for (int i = 0; i < 13; i++)
		{
			if (member[i].name == name2)
			{
				info2 = member[i];
				break;
			}
		}
		if (info1.generation == NULL || info2.generation == NULL)
			result[count].ancestor += "No enough information";
		else if (info1.generation < info2.generation)
			result[count].ancestor += "Yes";
		else
			result[count].ancestor += "No";

		if (info1.age == NULL || info2.age == NULL)
			result[count].age += "No enough information";
		else if (info1.age > info2.age)
			result[count].age += "Yes";
		else
			result[count].age += "No";

		count++;
	}
	for (int i = 0; i < count; i++)
	{
		cout << result[i].ancestor << endl;
		cout << result[i].age << endl;
	}
	return 0;
}


