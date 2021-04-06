#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int A_temp;
	int B_temp;
	int C_temp;
	int cnt = 0;
	if (A % 2 == 0 && B % 2 == 0 && C % 2 == 0&&
		A == B&&B == C)
	{
		cout << -1 << endl;
		return 0;
	}

	while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0)
	{
		A_temp = (B + C) / 2;
		B_temp = (A + C) / 2;
		C_temp = (A + B) / 2;
		A = A_temp;
		B = B_temp;
		C = C_temp;
		cnt++;
	}
	cout << cnt << endl;
	
	
}