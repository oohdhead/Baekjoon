#include <iostream>
#include <string>
#include <deque>
using namespace std;

// 24511
// 명령 한 줄에 출력 한 줄이 바로바로 안나오고 나중에 한 번에 나오지만 백준에서는 맞다고 해줌
int main()
{
    // 시간 관리 필수
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;

    deque<int> dq;
    for(int i = 0; i < N; i++)
    {
        string a;
        cin >> a;

        if(a == "1")
        {
            int b;
            cin >> b;
            dq.push_front(b);
        }
        else if(a == "2")
        {
            int b;
            cin >> b;
            dq.push_back(b);
        }
        else if(a == "3")
        {
            if(!dq.empty())
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else cout << -1 << '\n';
        }
        else if(a == "4")
        {
            if(!dq.empty())
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else cout << -1 << '\n';
        }
        else if(a == "5")
        {
            cout << dq.size() << '\n';
        }
        else if(a == "6")
        {
            if(dq.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(a == "7")
        {
            if(!dq.empty())
            {
                cout << dq.front() << '\n';
            }
            else cout << -1 << '\n';
        }
        else if(a == "8")
        {
            if(!dq.empty())
            {
                cout << dq.back() << '\n';
            }
            else cout << -1 << '\n';
        }
        else return 0;
    }
}