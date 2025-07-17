#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int N;
	cin >> N;

	stack<int> s;

	for(int i = 0; i < N; i++)
	{
		string x;
		int y;
		cin >> x;

		if(x == "push")
		{
		    cin >> y;
			s.push(y);
		}

		else if(x == "pop")
		{
			if(!s.empty())
			{
				cout << s.top() <<'\n';
				s.pop();
			}
			else cout << -1 <<'\n';
		}

		else if(x == "size")
		{
			cout << s.size() <<'\n';
		}

		else if(x == "empty")
		{
			cout << s.empty() <<'\n';
		}

		else if(x == "top")
		{
			if(!s.empty()) cout << s.top() <<'\n';
			else cout << -1 <<'\n';
		}

		else return 0;
	}

	return 0;
}