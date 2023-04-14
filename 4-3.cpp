#include <iostream>
#include <string>
using namespace std;

class Rectangle { // Rectangle 클래스 선언
public: // 외부에서 멤버 함수에 접근 가능한 public으로 선언
	int width; // 정수형 width 선언
	int height; // 정수형 height 선언
	int getArea(); // 사각형의 면적을 계산하는 getArea() 선언
};

int Rectangle::getArea() { // getArea() 함수를 정의
	return width * height; // 사각형의 면적 계산 결과를 반환
}

int main() {
	Rectangle rect; // Rectangle 클래스의 객체 rect 선언
	rect.width = 3; // rect의 width를 3으로 선언
	rect.height = 5; // rect의 height를 5로 선언
	cout << "사각형의 면적은 " << rect.getArea() << endl; // rect의 면적 단순 출력
}