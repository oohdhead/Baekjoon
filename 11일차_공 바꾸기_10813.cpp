#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M; 

    cin >> N >> M;
    
    vector<int> basket(N);
    for (int x = 0; x < N; x++)
        basket[x] = x + 1;
        
    for (int x = 0; x < M; x++)
    {
        int i, j; 
        cin >> i >> j;
        
        int tmp = basket[i - 1];
        basket[i - 1] = basket[j - 1];
        basket[j -1] = tmp;
            
    }
    
    for (int x = 0; x < N; x++)
    {
        cout << basket[x] << " ";
    }
    return 0;
}