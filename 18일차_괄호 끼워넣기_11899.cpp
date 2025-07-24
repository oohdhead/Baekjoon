#include <iostream>
#include <stack>
using namespace std;

// 11899
int main()
{
    string str;
    cin >> str;
    
    stack<char> s;
    for(int i = 0; i < str.size(); i++)
    {
        if(s.empty())
            s.push(str[i]);
        else
            if(str[i] == '(') s.push(str[i]);
            else if(str[i] == ')')
            {
                if(s.top() == '(') s.pop();
                else if(s.top() == ')') s.push(str[i]);
            }
    }
    cout << s.size();
    return 0;
}