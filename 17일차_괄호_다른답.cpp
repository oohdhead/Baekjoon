#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<string> v(N); // N개의 문자열 저장

    for(int i = 0; i < v.size(); i++){ // 문자열 입력
        cin >> v[i];
        stack<char> s;
        bool res = true; // 올바른지 여부 표시

        for(char ch : v[i]){ // 문자열 각 문자 확인
            if(ch == '('){
                // 여는 괄호면 스택 s에 push
                s.push(ch);
            }
            else if(ch == ')'){
                // 스택 비어있으면 올바르지 않음
                // ')'의 짝인 '('가 없다는 의미
                if(s.empty()){
                    // 짝이 안맞음
                    res = false;
                    break;
                }
                s.pop(); // 짝 맞으면 pop
            }
        }

        // 모두 처리되고 스택 비었으면 YES
        if(res && s.empty())
            cout << "YES\n";
        // 아니면 NO
        else
            cout << "NO\n";
    }

    return 0;
}
