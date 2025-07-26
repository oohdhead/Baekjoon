#include <iostream>
#include <queue>
#include <string>
using namespace std;

// 10845
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	queue<int> s;
	string str;
	int a;

	for(int i = 0; i < N; i++)
	{
		cin >> str;
		if(str == "push")
		{
			cin >> a;
			s.push(a);
		}
		else if(str == "pop")
		{
			if(s.empty()) cout << "-1" << '\n';
			else
			{	cout << s.front() << '\n';
				s.pop();
			}
		}
		else if(str == "size")
		{
			cout << s.size() << '\n';
		}
		else if(str == "empty")
		{
			if(s.empty()) cout << "1" << '\n';
			else cout << "0" << '\n';
		}
		else if(str == "front")
		{
			if(s.empty()) cout << "-1" << '\n';
			else cout << s.front() << '\n';
		}
		else if(str == "back")
		{
			if(s.empty()) cout << "-1" << '\n';
			else cout << s.back() << '\n';
		}
	}
	return 0;
}