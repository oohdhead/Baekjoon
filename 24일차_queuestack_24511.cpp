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

    deque<pair<int,deque<int>>> dq;
    for(int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    return 0;
}