#include <iostream>
#include <stack>
#include <string>
using namespace std;

// 4949
int main()
{
    string str;
    getline(cin, str);  //첫 줄 입력
    
    while(str != ".")  // "."만으로 이루어진 string 나오면 종료
    {
        string ans = "yes";
        stack<char> s;
    
        for(char a : str)
        {
            if(a == '(' || a == '[')
            {
                s.push(a);  //여는 괄호 push
            }
            else if(a == ')') //닫는 괄호 ) 가 들어오는 경우
            {
                if(!s.empty() && s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    ans = "no";
                    break;
                }
            }
            else if(a == ']') //닫는 괄호 ] 가 들어오는 경우
            {
                if(!s.empty() && s.top() == '[')
                {
                    s.pop();
                }
                else
                {
                    ans = "no";
                    break;
                }
            }
        }    
        if(!s.empty())  //열린 괄호가 닫히지 않고 남아있는 경우
            ans = "no";
        cout << ans << "\n";
        getline(cin, str); //다음 줄 입력
    }

    return 0;
}