#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// 11651
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second; 
}

int main()
{
    int N;
    cin >> N;
    
    vector<pair<int, int>> v;
    
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
        
    sort(v.begin(), v.end(), compare);
    
    for (int i = 0; i < N; i++)
        cout << v[i].first  << " " << v[i].second << '\n';
    
    return 0;
}