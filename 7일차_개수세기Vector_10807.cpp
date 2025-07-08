#include <iostream>
#include <vector>
using namespace std;

// 10807
int main()
{
    vector<int> nums;
    int n, v, count = 0;

    // 정수의 개수
    cin >> n;
    
    //정수들
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    //찾으려고 하는 정수
    cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == v)
            count++;
    }

    cout << count;

    return 0;
}