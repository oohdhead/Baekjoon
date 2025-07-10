#include <iostream>
#include <vector>
using namespace std;

//10810
int main()
{
    int N, M;  //바구니 수, 공 넣는 횟수
    cin >> N >> M;

    vector<int> baskets(N, 0);
    int i, j, k; // i번 바구니부터 j번 바구니까지 k번 공을 넣는다
    
    for (int a = 0; a < M; a++)
    {
        cin >> i >> j >> k;
        for (int x = i; x <= j; x++)
            baskets[x - 1] = k;
    }

    for (int y = 0; y < N; y++)
        cout << baskets[y] << " ";
    
    return 0;
}