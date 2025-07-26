#include <iostream>
#include <queue>
using namespace std;

// 2161
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    queue<int> s;
    
    for(int i = 1; i <= N; i++)
        s.push(i);         //1 2 3 4 5 6 7
        
    while(s.size() > 1)
    {
        cout << s.front() << ' ';
        s.pop();          // 2 3 4 5 6 7
        s.push(s.front());//2 3 4 5 6 7 2
        s.pop();          //3 4 5 6 7 2
    }
    cout << s.front();
    return 0;
}