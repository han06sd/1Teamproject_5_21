#include <iostream>
#include "add.h"    // 더하기 함수 선언
#include "sub.h"    // 빼기 함수 선언
#include "mul.h"    // 곱하기 함수 선언
#include "div.h"    // 나누기(몫) 함수 구현
#include "mod.h"    // 나누기(나머지) 함수 구현

using namespace std; // std::cout, std::endl 등을 사용할 때 std:: 생략 가능

int main() {
    int add = addFunc(3, 9);    // 12
	int sub = subFunc(15, 5);   // 10
	int mul = mulFunc(7, 13);   // 91
	int div = divFunc(100, 4);  // 25
	int mod = modFunc(87, 6);   // 3

    cout << "ADD = " << add << endl;
    cout << "SUB = " << sub << endl;
    cout << "MUL = " << mul << endl;
    cout << "DIV = " << div << endl;
    cout << "MOD = " << mod << endl;

	return 0;

}

// 헤더파일: 함수 원형, 클래스 정의, 매크로, 상수 정의
// #include "my_header.h"와 같이 소스 파일에서 불러와 사용한다

// 소스파일: 함수 구현, 클래스 멤버 함수 구현
// 헤더 파일에서 선언된 함수들이 실제로 어떻게 동작하는지 상세 코드를 작성한다