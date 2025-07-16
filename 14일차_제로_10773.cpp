#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k, x;
    cin >> k;
    
    vector<int> v;
    
    for(int i = 0; i < k; i++)
    {
        cin >> x;
        if (x == 0)
        {
            if(!v.empty())
            {
                v.pop_back();
            }
        }
        else
        {
            v.push_back(x);
        }
    }
    
    int sum = 0;
    for (int num : v)
    {
        sum += num;
    }
    cout << sum;

    return 0;
}