#include <iostream>
#include <stack>
using namespace std;

// 9012
int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        stack<char> s;
        string str;
        cin >> str;
        
        for(int i = 0; i < str.length(); i++)
        {
            if(s.empty())
            {
                s.push(str[i]);
            }
            else
            {
                if(s.top() == '(' && str[i] == ')')
                {
                    s.pop();
                }
                else
                {
                    s.push(str[i]);
                }
            }
        }
        if(s.empty()) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    return 0;
}