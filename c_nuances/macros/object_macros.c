#include <stdio.h>
#define NUMBER 20
#define NUMBERS 1,2,3
#define A_NUMBER NUMBER



int main()	{
	printf("%d",NUMBER);
	printf("%d",A_NUMBER);
	int a[] = {NUMBERS};
	for (int i = 0;i < 3;i++)	{
		printf("\n %d",a[i]);
	}
	return 0;
}
