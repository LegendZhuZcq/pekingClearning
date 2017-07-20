#include<stdio.h>
#include<string.h>
#define STRING_SIZE 80
int main(void) {
	int maxLength = 0;
	int tempLength;
	char word[STRING_SIZE + 1];
	char temp[STRING_SIZE + 1];
	while (1) {
		/* 输入单词 */
		scanf("%s", temp);
		/* 确定单词长度*/
		tempLength = strlen(temp);
		if (temp[tempLength - 1] == '.')
			--tempLength;
		/* 确定最长单词*/
		if (tempLength > maxLength) {
			maxLength = tempLength;
			/* 不包括最后的.*/
			strncpy(word, temp, tempLength);
			word[maxLength] = '\0';
		}
		if (temp[tempLength] == '.')
			break;
	}
	printf("%s\n", word);
	return 0;
}