#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> s; // string을 원소로 갖는 vector s 선언
    string name; // string 타입의 변수 name 선언

    cout << "이름 5개 입력하라\n"; // 단순 출력
    for (int i = 0; i < 5; i++) // 5번 반복하는 루프
    {
        cout << i + 1 << ">>"; // 입력할 이름의 번호 출력
        getline(cin, name); // 이름을 입력 받아 name에 저장
        s.push_back(name); // s의 끝에 name을 추가
    }
    name = s.at(0); // name을 s의 첫 번째 원소로 초기화
    for (int i = 0; i < s.size(); i++) // s의 모든 원소에 대해 루프
    {
     if (name < s[i]) // name이 s[i]보다 사전상 앞에 있으면
        name = s[i]; // name을 s[i]로 수정하여 저장
    }
    cout << "사전에서 가장 뒤에 나오는 이름은 " << name << "\n"; // 단순 출력
}