#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <list>	
using namespace std;

int main()
{
	int N; //	걸그룹의 수
	int M; //	문제의 수
	map<string, vector<string>> GirlGroup;
	map<string, string> reverseGroup;
	vector<string> Members;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string groupName;
		cin >> groupName;
		int member;
		cin >> member;
		for(;member;member--)
		{
			string memName;
			cin >> memName;
			Members.push_back(memName);
			if (find(Members.begin(),Members.end(),memName) == Members.end())
				continue;
			GirlGroup[groupName].push_back(memName);
			reverseGroup[memName] = groupName;
		}
		sort(GirlGroup[groupName].begin(), GirlGroup[groupName].end());
	}
	/*
		for debug
	*/
	//for (auto itr : GirlGroup)
	//{
	//	for (auto it : itr.second)
	//	{
	//		cout << it << " ";
	//	}
	//	cout << "\n";
	//}
	for (int i = 0; i < M; i++)
	{
		string name;
		cin >> name;
		int query;
		cin >> query;
		if (query == 1)
		{
			cout << reverseGroup[name] << endl;
		}
		else if (query == 0)
		{
			for (auto &itr : GirlGroup[name])
			{
				cout << itr << endl;
			}
		}
	}

	system("pause");
	return 0;
}