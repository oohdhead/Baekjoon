#include <iostream>
#include <queue>
using namespace std;

// 11866
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    queue<int> q;
    for(int i = 0; i < n; i++)
    {
        q.push(i+1);
    }

    cout << '<';
    while(!q.empty())
    {
        for(int i = 1; i < k; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if(q.size() != 1) cout << ", ";
        q.pop();
    }
    cout << '>';
    return 0;
}