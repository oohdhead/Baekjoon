#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie();

    int N;
    cin >> N;

    deque<pair<int, int>> dq;
    for(int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        dq.push_back({i+1, x});
    }

    while(dq.size() != 1)
    {
        int num = dq.front().second;
        cout << dq.front().first << " ";
        dq.pop_front();

        //양수
        if(num > 0)
        {
            for(int i = 0; i < num - 1; i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        
        //음수
        else
        {
            for(int i = 0; i < -num; i++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    cout << dq.front().first;
}