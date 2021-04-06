#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> A;
	vector<int> B;
	
	for (int i = 0; i < M; ++i)
	{
		int ai, bi;
		cin >> ai;
		A.push_back(ai);
		cin >> bi;
		B.push_back(bi);
	}
}