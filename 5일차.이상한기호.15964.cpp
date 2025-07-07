#include <iostream>
using namespace std;

//최악의 경우 int의 범위를 벗어날 수 있으므로 long long형태 사용
long long newOperator(long long x, long long y)
{
    return (x + y) * (x - y);
}

int main()
{   
    long long a ,b;
    cin >> a >> b;
    cout << newOperator(a, b);

    return 0;
}