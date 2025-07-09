#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    string str;

    cin >> n;
    cin >> str;

    for (int i = 0; i < n; i++)
        sum += str[i] - 48;  //char형 0은 숫자 48이기 때문

    cout << sum;
    return 0;
}