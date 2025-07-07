#include <iostream>
using namespace std;

// 10807
int main()
{
    int count, v_count = 0;
    int arr[100000];
    int v;

    // 정수의 개수
    cin >> count;

    // 정수
    for (int i = 0; i < count; i++)
        cin >> arr[i];

    // 찾으려고 하는 정수
    cin >> v;

    for (int i = 0; i < count; i++)
        if (arr[i] == v)
            v_count++;

    cout << v_count;

    return 0;
}