#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a_i;
	vector<int> A;
	for (int i = 0; i < N; ++i)
	{
		cin >> a_i;
		A.push_back(a_i);
	}
	int sentinel = A[0];
	int flag = -1;
	int count = 0;
	for (int i = 1; i < N; ++i)
	{
		if (flag == -1)
		{
			if (A[i] > sentinel)
				flag = 1;
			if (A[i] < sentinel)
				flag = 0;
			if (A[i] == sentinel)
				flag = -1;
			sentinel = A[i];
			continue;
		}

		if(A[i] < sentinel&&flag==1)
		{
			count++;
			flag = -1;
		}

		if (flag==0&&A[i] > sentinel)
		{
			count++;
			flag = -1;
		}

		sentinel = A[i];
	}

	
	cout << count+1 << endl;
	
	
	while (true)
	{

	}

	return 0;
}