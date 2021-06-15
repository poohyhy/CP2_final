#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	MAX_LINE_SIZE	100
#define FILE_NAME	"8.dat"

int main(void)
{
	//단어, 문자, 줄 수 카운트
	int wordcount = 0;
	int charcount = 0;
	int linecount = 0;

	//파일 읽기 모드로 open
	FILE *fp = fopen(FILE_NAME, "r");
	while(!feof(fp)) {
		//읽어들인 한 줄을 저장할 line문자열을 매 읽기마다 동적으로 생성
		char *line = (char *)malloc(sizeof(char) * MAX_LINE_SIZE);
		//한줄 읽기
		fgets(line, MAX_LINE_SIZE, fp);
		//한줄 출력
		printf("%s",line);

		//line 문자열에 들어있는 char의 수를 계산하여 문자 수 계산
		for (int i = 0; line[i]; i++)
			charcount++;

		//strtok로 line을 공백과 개행을 단위로 분리하여 단어 수 계산
		char *piece = strtok(line, " \n");
		while (piece) {
			wordcount++;
			piece = strtok(NULL, " \n");
		}

		//8.dat의 마지막 행 같이 비어있는 행을 만나면 건너뛴다.
		if(strcmp(line, "\0") == 0)
			continue;

		//라인 수를 1증가시키고 다시 loop
		linecount++;
	}
	printf("\n%d %d %d %s", linecount, wordcount, charcount, FILE_NAME);
	fclose(fp);

	return 0;
}