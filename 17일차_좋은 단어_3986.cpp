#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int cnt = 0;
    while(N--)
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
                if(str[i] == s.top())
                {
                    s.pop();
                }   
                else
                {
                    s.push(str[i]);
                }
                
            }
        }
        if(s.empty()) cnt++;
    }
    
    cout << cnt;
    
    return 0;
}