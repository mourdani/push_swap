#include "header.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	int i;
	int a[argc];

	i = 0;
	int j;
	j = argc;
	if (argc == 1)
		return (0);
	while (argc > 1)
		a[i++] = atoi(argv[argc-- - 1]);
	a[i] = '\0';

	printf("==================================");
	printf("\n - original stack 'a'\n\n");
	i = 0;
	argc = j;
	while ( i < (argc))
	{
		printf("a[%d] = %d\n", i, a[i]);
		i++;
	}

	printf("==================================");
	printf("\n - stack 'a' after swap :\n\n");
	swap(a);
	
	i = 0;
	argc = j;
	while ( i < (argc))
	{
		printf("a[%d] = %d\n", i, a[i]);
		i++;
	}

	printf("==================================");
	printf("\n - stack 'a' after rotate :\n\n");
	rotate(a);
	
	i = 0;
	argc = j;
	while ( i < (argc))
	{
		printf("a[%d] = %d\n", i, a[i]);
		i++;
	}
	
	printf("==================================");
	printf("\n - stack 'a' after reverse rotate :\n\n");
	rrotate(a);
	rrotate(a);
	rrotate(a);
	rrotate(a);
	
	i = 0;
	argc = j;
	while ( i < (argc))
	{
		printf("a[%d] = %d\n", i, a[i]);
		i++;
	}
	return (0);


}
