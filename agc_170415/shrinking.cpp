#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
int main()
{
	string s;
	
	cin >> s;
	
	int n = s.length();
	int count = 0;

	map<char, int> mymap;
	for (auto& c : s)
	{
		mymap[c]++;
	}
	int m = 0;
	for (auto& elem : mymap)
	{
		m = max(m, elem.second);
	}
	while (m < n)
	{
		m = m * 2;
		count++;
	}

	cout << count << endl;
	
	while (true)
	{

	}

}