#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool __greater__(long long a, long long b)
{
	return a > b;
}

int main()
{
	int N;
	cin >> N;
	long long strength;
	vector<long long> stren_vec;
	int count = 0;
	while (cin >> strength)
	{

		stren_vec.push_back(strength);
		count++;
		if (count == 3 * N)
			break;

	}
	sort(stren_vec.begin(), stren_vec.end(), __greater__);
	long long res = 0;
	for (int i = 1; i < 2 * N; i += 2)
	{
		res += stren_vec[i];
	}
	cout << res << endl;


	return 0;
}