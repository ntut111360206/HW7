#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fPtr;
	char ch;
	int c = 0;
	fPtr = fopen("./welcome.txt", "r");
	if (fPtr != NULL) {
		while ((ch = getc(fPtr)) != EOF) {
			printf("%c", ch);
			c++;
		}
		fclose(fPtr);
		printf("\n�`�@��%d���r��\n", c);
	}
	else printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}