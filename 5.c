#include <stdio.h>

int main(void)
{
	unsigned long long a, b;
	scanf("%llu %llu", &a, &b);
	printf("1st integer %llu\n2nd integer %llu\n%llu", a, b, a+b);
	return 0;
}