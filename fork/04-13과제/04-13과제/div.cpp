// 나누기(몫) 함수 구현
#include "div.h"
#include "sub.h"

int divFunc(int a, int b) {
	int c = 0;

	// 0으로 나누는 경우는 패스
	if (b == 0)
		return 0;

	// a가 b보다 크거나 같은 동안 실행
	while (a >= b) {
		// 빼기 함수 호출
		a = subFunc(a, b);
		c = c + 1;
	}

	return c;
}