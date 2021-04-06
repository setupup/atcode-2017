#include <iostream>
#include <string>

using namespace std;
int main()
{
	string floors;
	cin >> floors;
	long long times = 0;
	for (int i = 0; i < floors.size(); ++i)
	{
		for (int j = 0; j < floors.size(); ++j)
		{
			if (i == j)
				continue;
			if (i < j)
			{
				if (floors[i] == 'U')
				{
					times++;
				}
				else
				{
					times += 2;
				}
			}
			if (i > j)
			{
				if (floors[i] == 'D')
				{
					times++;
				}
				else
				{
					times += 2;
				}
			}
		}
	}
	cout << times << endl;
	while (true)
	{

	}
}