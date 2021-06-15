#include <stdio.h>

long fib(long n)
{
	long fib_2 = 1, fib_1 = 2, result;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	else {
		for(int i = 3; i <= n; i++) {
			result = fib_1 + fib_2;
			fib_2 = fib_1;
			fib_1 = result;
		}
	}
	return result;
}

void find(long a, long b)
{
	int n = 0;
	int count = 0;
	while(fib(n) < b) {
		if (a < fib(n)) {
			printf("%ld ", fib(n));
			count++;
		}
		n++;
	}
	printf("\n%d", count);
}

int main(void)
{
	long a, b;
	scanf("%ld %ld", &a, &b);
	find(a, b);
	return 0;
}