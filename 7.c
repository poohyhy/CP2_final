#include <stdio.h>
#include <stdlib.h>
#define MAX_BINARY_ARR	100

int main(void)
{
	int n, index = 0; //10진수와 arr배열의 인덱스
	int a, b; //몫과 나머지
	int arr[MAX_BINARY_ARR]; //비트를 저장할 배열

	//10진수 입력
	printf("Enter decimal number : "); 
	scanf("%d", &n); 

	//a와 b가 초기화되어있지 않기때문에 do-while사용
	//10진수 n을 2로 나눈 나머지 b를 arr배열에 추가하고 몫 a에 대해 루프를 반복
	do { 
		a = n/2; 
		b = n-a*2; 
		arr[index++] = b; 
		n = a; 
	} while (a != 0); 

	printf("Binary number is : ");
	//arr배열을 역순으로 출력하여 변환된 이진수 출력
	for (int i = index-1; i >= 0; i--)
		printf("%d", arr[i]); 
	printf("\n");
	return 0; 
}