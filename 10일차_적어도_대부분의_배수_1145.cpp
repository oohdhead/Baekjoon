#include <iostream>
#include <vector>
using namespace std;

// 1145
int main()
{
    vector<int> nums(5);

    for (int i = 0; i < 5; i++)
        cin >> nums[i];
    
    int res = 1;
    while(true)
    {
        int count = 0;  //5개 중 res로 나누어떨어지는 원소 수
        for (int i = 0; i < 5; i++)
            if (res % nums[i] == 0)
                count++;
        
        if (count >= 3)
            break;
        res++;
    }

    cout << res;
    return 0;
}