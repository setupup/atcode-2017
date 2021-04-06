#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
using namespace std;
int main()
{
	string s;

	cin >> s;

	int n = s.length();
	int count = 0;


	map<char, int> mymap;
	map<char, int> finalmap;
	map<char, bool> flagmap;
	for (int i=0;i<s.length();++i)
	{
		char c = s[i];
		int dist;
		if (mymap[c] == 0 && flagmap[c] == false)
		{
			flagmap[c] = true;
			dist = i - mymap[c];
		}
		else
		{
			dist = i - mymap[c]-1;
		}
		
		if (dist > finalmap[c])
		{
			finalmap[c] = dist;
		}
		mymap[c] = i;
	}

	for (auto& elem : mymap)
	{
		//cout << elem.second << endl;
		int dist = s.length() - 1 - elem.second;
		//cout << dist << endl;
		if (dist > finalmap[elem.first])
		{
			finalmap[elem.first] = dist;
		}
	}

	int m = INT_MAX/2;
	for (auto& elem : finalmap)
	{
		m = min(m, elem.second);
	}
	

	cout << m << endl;

	while (true)
	{

	}

}