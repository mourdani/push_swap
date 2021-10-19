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

	i = 0;
	argc = j;
	while ( i < (argc))
	{
		printf("a[%d] = %d\n", i, a[i]);
		i++;
	}

	printf("\n - stack 'a' after swap :\n\n");
	swap(a);
	
	i = 0;
	argc = j;
	while ( i < (argc))
	{
		printf("a[%d] = %d\n", i, a[i]);
		i++;
	}
	return (0);


}
