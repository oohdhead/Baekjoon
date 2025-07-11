#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M; //바구니 수, 역순으로 만들 횟수

    cin >> N >> M;
    
    vector<int> basket(N);
    for (int x = 0; x < N; x++)
        basket[x] = x + 1;
        
    for (int x = 0; x < M; x++)
    {
        int i, j; //i번째 바구니부터 j번째 바구니 
        cin >> i >> j;
        
        //swap 
        int left = i-1;
        int right = j-1;
        while(left < right)
        {
            int tmp = basket[left];
            basket[left] = basket[right];
            basket[right] = tmp;
            
            left++;
            right--;
        }
    }
    
    //출력
    for (int x = 0; x < N; x++)
    {
        cout << basket[x] << " ";
    }
    return 0;
}