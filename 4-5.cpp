#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; // string형 s를 선언
    cout << "여러 줄의 문자열을 입력하시오. 입력의 끝은 &문자입니다.\n"; // 단순 출력
    getline(cin, s, '&'); // 입력을 받고 변수 s에 저장
    cin.ignore(); // enter (개행문자) 한글자를 없애주는
    // getline으로 입력 받으면 입력 버퍼에 개행문자가 남으므로, cin.ignore()을
    // 선언하여 입력 버퍼를 비워주는 역할을 함
    string f, r; // 문자열 f와 r을 선언
    cout << "\n" << "find : ";
    getline(cin, f, '\n'); // 찾을 문자열 f를 입력 받음
    cout << "replace : ";
    getline(cin, r, '\n'); // 바꿀 문자열 r을 입력 받음

    int startIndex = 0; // 문자열 s에서 찾기 시작할 인덱스
    while (1)
    {
        int fIndex = s.find(f, startIndex);
        // s에서 f를 검색하여 첫 번째로 나오는 위치를 finde에 저장
        if (fIndex == -1) // f가 더이상 존재하지 않으면 반복 종료
            break;
        s.replace(fIndex, f.length(), r); //replace(위치, 문자열 길이, 바꿀 문자)
        // 찾은 f를 r로 바꿔줌
        startIndex = fIndex + r.length(); // 다음 위치부터 다시 찾을 수 있도록 인덱스를 바꿔줌
    }
    cout << s << "\n"; // 바뀐 문자열 출력
}