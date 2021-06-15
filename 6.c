#include <stdio.h>

/*	피보나치를 재귀함수로 구현하면 중복계산으로 인해 계산시간이 너무 길어지기 때문에,
	반복문으로 n번째 피보나치 수를 구하는 함수 구현*/
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

//주어진 수 b보다는 작고 a보다는 큰 피보나치 수를 출력하는 함수
void find(long a, long b)
{
	int n = 0;
	int count = 0;

	//while문의 조건식과 if문의 중첩으로 구현
	while(fib(n) < b) {
		if (a < fib(n)) {
			printf("%ld ", fib(n));
			count++;
		}
		n++;
	}
	printf("\n%d\n", count);
}

int main(void)
{
	long a, b;
	scanf("%ld %ld", &a, &b);
	find(a, b);
	return 0;
}