#include <iostream>
#include <queue>
using namespace std;

// 13335
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n, w, L; //트럭수, 다리길이, 다리의 최대하중
    queue<int> a, b; //트럭무게 큐, 다리 큐

    cin >> n >> w >> L;
    int x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a.push(x);
    }

    int time = 0, sum = 0; //시간, 현재 다리의 트럭 무게합
    while(!a.empty())
    {
        if(b.size() == w) //다리가 꽉참
        {
            sum -= b.front();
            b.pop();
        }
        if(sum + a.front() <= L)
        {
            b.push(a.front());
            sum += b.back();
            a.pop();
        }
        else
        {
            b.push(0);
        }
        time++;
    }
    cout << time + w;
    return 0;
}