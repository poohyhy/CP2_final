#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define	MAX_FILE_SIZE	100
#define FILE_NAME	"8.dat"

int main(void)
{
	int wordcount = 0;
	int charcount = 0;
	int linecount = 0;

	FILE *fp = fopen(FILE_NAME, "r");
	while(!feof(fp)) {
		char *line = (char *)malloc(sizeof(char) * MAX_FILE_SIZE);
		fgets(line, MAX_FILE_SIZE, fp);
		
		printf("%s",line);
		for (int i = 0; line[i]; i++) {
			//if (isalpha(line[i]))
				charcount++;
		}
		char *piece = strtok(line, " \n");
		while (piece) {
			wordcount++;
			piece = strtok(NULL, " \n");
		}
		linecount++;
	}
	printf("\n%d %d %d %s", linecount, wordcount, charcount, FILE_NAME);
	fclose(fp);

	return 0;
}