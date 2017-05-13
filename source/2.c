
#include <stdio.h>

int add(int a, int b)
{
	printf("%s %d\r\n", __func__, __LINE__);
	return a + b;
}
