#include "header.h"
#include <stdio.h>

int 	test(t_stack a,t_stack b)
{
	int i;

	printf("=============|original stack 'a'|=============\n");
	i = a.max_i;
	printf("a.max_i = %d 	|\n", a.max_i);
	while ( i >= 0)
	{
		printf("a[%d] = %d 	|", i, a.stack[i]);
		printf("b[%d] = %d\n", i, b.stack[i]);
		i--;
	}
/*
	printf("=============|swap 'a'|=============\n");
	swap(a);
	i = a.max_i;
	while ( i >= 0)
	{
		printf("a[%d] = %d 	|", i, a.stack[i]);
		printf("b[%d] = %d\n", i, b.stack[i]);
		i--;
	}

	printf("\n\n=============|rotate|=============\n");
	rotate(a);
	rotate(a);
	i = a.max_i;
	while ( i >= 0)
	{
		printf("a[%d] = %d 	|", i, a.stack[i]);
		printf("b[%d] = %d\n", i, b.stack[i]);
		i--;
	}
	
	printf("\n\n=============|rrotate|=============\n");
	rrotate(a);
	rrotate(a);
	rrotate(a);
	i = a.max_i;
	while ( i >= 0)
	{
		printf("a[%d] = %d 	|", i, a.stack[i]);
		printf("b[%d] = %d\n", i, b.stack[i]);
		i--;
	}
	
	printf("\n\n=============|push|=============\n");
	push(a, b);
	a.max_i -= 1;
	b.max_i += 1;
	i = a.max_i;
	while (i >= 0)
	{
		printf("a[%d] = %d 	|", i, a.stack[i]);
		printf("b[%d] = %d\n", i, b.stack[i]);
		i--;
	}
	printf("\n\n=============|push|=============\n");
	push(a, b);
	a.max_i -= 1;
	i = a.max_i;
	while (i >= 0)
	{
		printf("a[%d] = %d 	|", i, a.stack[i]);
		printf("b[%d] = %d\n", i, b.stack[i]);
		i--;
	}*/
	return (0);
}
