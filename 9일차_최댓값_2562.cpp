#include <iostream>
#include <vector>
using namespace std;

//2562
int main()
{
    vector<int> v(9);

    for (int i = 0; i < 9; i++)
        cin >> v[i];  //크기가 설정된 벡터이므로 인덱스 접근이 가능 push_back 안써

    int max = v[0];
    int max_loc = 1;  //초기화 꼭 해야함 안하면 첫번째 값이 max일 때 max_loc에 쓰레가 값이 들어감
    for (int i = 0; i < 9; i++)
        if (v[i] > max)
        {
            max = v[i];
            max_loc = i + 1;
        }

    cout << max << endl;
    cout << max_loc;
    return 0;
}