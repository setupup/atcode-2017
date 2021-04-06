#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	
	string str;
	//vector<string> str_vec;
	int count=0;

	unordered_map<char, int> my_map;
	unordered_map<char, int> global_map;
	string res;
	for (char c = 'a'; c <= 'z'; c++)
	{
		global_map[c] = 99;
		my_map[c] = 0;
	}

	cin >> n;
	while (cin >> str)
	{
		for (auto& chr : str)
		{
			my_map[chr]++;
		}
		for (auto& entry : my_map)
		{
			if (entry.second < global_map[entry.first])
			{
				global_map[entry.first] = entry.second;
			}
		}
		//str_vec.push_back(str);

		for (char c = 'a'; c <= 'z'; c++)
		{
			my_map[c] = 0;
		}

		count++;
		if (count == n)
			break;
	}
	
	
	for (char c='a';c<='z';++c)
	{
		//cerr << c << " " << global_map[c] << endl;
		res.append(global_map[c], c);
	}
	cout << res << endl;

	return 0;
}