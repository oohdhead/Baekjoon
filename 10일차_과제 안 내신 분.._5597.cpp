#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> student(30,0);
    for (int i = 0; i < 28; i++)
    {
        int a;
        cin >> a;
        student[a-1] = a;
    }

    for (int i = 0; i < 30; i++)
        if (student[i] == 0)
            cout << i+1 << endl;
    return 0;
} 