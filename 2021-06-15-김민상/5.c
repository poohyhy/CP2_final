#include <stdio.h>

int main(void)
{
	// 문제에 주어진 큰 수를 출력하기 위해 unsigned long long 타입 사용
	unsigned long long a, b;
	scanf("%llu %llu", &a, &b);
	printf("1st integer %llu\n2nd integer %llu\n%llu", a, b, a+b);
	return 0;
}