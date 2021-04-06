#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	int B, A;
	int h;
	vector<int> healths;
	cin >> N >> A >> B;
	for (int i = 0; i < N; ++i)
	{
		cin >> h;
		healths.push_back(h);
	}
	int times = 0;
	vector<int>::iterator iter_m;
	do {
		iter_m = max_element(healths.begin(), healths.end());
		for (vector<int>::iterator it = healths.begin(); it != healths.end(); ++it)
		{
			if (it == iter_m)
			{
				*it -= A;
			}
			else
			{
				*it -= B;
			}
		}
		++times;
	} while (*iter_m > 0);
	while(true)
	{
	}
}