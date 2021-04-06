#include <iostream>
using namespace std;
int main()
{
	int N, A, B;
	cin >> N >> A >> B;

	long long patterns = 0;

	if (B < A)
	{
		patterns = 0;
	}
	else if (B == A)
	{
		patterns = 1;
	}
	else
	{
		if (N == 1)
		{
			patterns = 0;
		}
		else
		{
			patterns = (long long) (N-2)*(B - A);
			patterns++;
		}
	}

	cout << patterns << endl;
}