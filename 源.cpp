#include<stdio.h>
int main()
{
	printf("2");
	int a=0,b[100];
	for (int i = 0; i < 100; i++)
	{
		b[i] = i;
	}
	for (int i = 3; i <= 100; i++)
	{
		for (int j = 2; j <i; j++)
		{
			if (i%j == 0)
				b[i]= 0;
		}
		if (b[i] != 0)
			printf("  %d", b[i]);
	}
	getchar();
	return 0;
}