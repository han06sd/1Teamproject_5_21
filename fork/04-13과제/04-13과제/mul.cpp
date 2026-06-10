// 곱하기 함수 구현
#include "mul.h"
#include "add.h"

int mulFunc(int a, int b) {
	int c = 0;

	while (b > 0) {
		c = addFunc(c, a);
		b = b - 1;
	}

	return c;
}