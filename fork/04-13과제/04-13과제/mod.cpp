// 나누기(나머지) 함수 구현
#include "mod.h"
#include "sub.h"

int modFunc(int a, int b) {

	// 0으로 나누는 경우는 패스
	if (b == 0)
		return 0;

	// a가 b보다 크거나 같은 동안 실행
	while (a >= b) {
		// 빼기 함수 호출
		a = subFunc(a, b);
	}

	return a;
}