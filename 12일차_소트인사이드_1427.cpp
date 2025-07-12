#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string N;
    cin >> N;
    
    vector<int> nums(N.size());
    
    for (int i = 0; i < N.size(); i++)
        nums[i] = N[i] - 48;
        
    sort(nums.begin(), nums.end(), greater<>());
    
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i];
        
    return 0;
}