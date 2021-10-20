#include "header.h"
#include <stdio.h>

int 	test(int argc, int* a, int *b)
{
	int i;

	printf("=============|original stack 'a'|=================\n");
	i = 0;
	while (i < argc)
	{
		printf("a[%d] = %d 	|", i, a[i]);
		printf("b[%d] = %d\n", i, b[i]);
		i++;
	}

	printf("\n\n=============|swap|===============\n");
	swap(a);
	i = 0;
	while (i < argc)
	{
		printf("a[%d] = %d 	|", i, a[i]);
		printf("b[%d] = %d\n", i, b[i]);
		i++;
	}

	printf("\n\n=============|rotate|=============\n");
	rotate(a);
	rotate(a);
	i = 0;
	while (i < argc)
	{
		printf("a[%d] = %d 	|", i, a[i]);
		printf("b[%d] = %d\n", i, b[i]);
		i++;
	}
	
	printf("\n\n=============|rrotate|=============\n");
	rrotate(a);
	rrotate(a);
	rrotate(a);
	i = 0;
	while (i < argc)
	{
		printf("a[%d] = %d 	|", i, a[i]);
		printf("b[%d] = %d\n", i, b[i]);
		i++;
	}
	
/*	printf("\n\n=============|stack 'a' after push|===============\n");
	push(a, b);
	i = 0;
	{
		printf("a[%d] = %d 	|", i, a[i]);
		printf("b[%d] = %d\n", i, b[i]);
		i++;
	}*/
	return (0);
}
