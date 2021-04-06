#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<int> values;
	int s;
	for (int i = 0; i < N; ++i)
	{
		cin >> s;
		values.push_back(s);
	}

	int sum = 0;
	for (auto& value : values)
	{
		sum += value;
	}
	if (sum % 10 == 0)
	{
		sort(values.begin(), values.end());
		int mvalue=0;
		for (int i = 0; i < values.size(); ++i)
		{
			if (values[i] % 10 != 0)
			{
				mvalue = values[i];
				break;
			}
		}
		if (mvalue == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << sum - mvalue << endl;
		}
	}
	else
	{
		cout << sum << endl;
		return 0;
	}
	while (true)
	{

	}
}