#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    int min = nums[0];
    int max = nums[0];

    for (int i = 0; i < N; i++)
    {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max =  nums[i];
    }
    cout << min << endl << max;
    return 0;
} 

/*
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max =  nums[i];
    }
    cout << min << endl << max;
    return 0;
} 
*/