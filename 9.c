#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define	SWAP(x, y, t)	((t)=(x), (x)=(y), (y)=(t))

void bubbleSort(char *arr[], int index)
{
	char *tmp;
	for (int i = index; i > 0; i--) {
		for (int j = 1; j < index; j++) { //argv[0][]는 명령어이므로 1부터 정렬 시작
			if (strcmp(arr[j], arr[j+1]) > 0) {
				SWAP(arr[j], arr[j+1], tmp);
			}
		}
	}
}

void bubbleSort_r(char *arr[], int index)
{
	char *tmp;
	for (int i = index; i > 0; i--) {
		for (int j = 2; j < index; j++) { //argv[1][]까지는 명령어이므로 2부터 정렬 시작
			if (strcmp(arr[j], arr[j+1]) < 0) {
				SWAP(arr[j], arr[j+1], tmp);
			}
		}
	}
}

int main(int argc, char **argv)
{
	if (strcmp(argv[1], "-r") == 0) {
		bubbleSort_r(argv, argc-1);
			for (int i = 2; i < argc; i++) //argv[1][]까지는 명령어이므로 2부터 출력 시작
				printf("%s ", argv[i]);
	}
	else{
		bubbleSort(argv, argc-1);
			for (int i = 1; i < argc; i++) //argv[0][]는 명령어이므로 1부터 출력 시작
				printf("%s ", argv[i]);
	}
	return 0;
}