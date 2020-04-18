#include <stdio.h>
#include <stdarg.h>

int var_func(char *buf,int id,...)	{
	va_list tag;

	va_start(tag,id);
	
	// Use the id parameter to identify the arguments signature
	int n = 10;
	char *str;
	if (id == 0)	{
		printf("id is 0");
	}


	if (id == 1)	{
		printf("id is 1");
		n = va_arg(tag,int);
	}
	va_end(tag);

	for (int i = 0;i < n;i++)	{
		printf("\n %s ",buf);
	}
}

int main()	{
	var_func("poopy",0);
	var_func("poopy poop",1,20);
}

