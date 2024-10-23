#include <stdio.h>


float abs2(float x)
{
	if (x >= 0) return x;
	return -x;
}

int main()
{
	printf("%f",abs(-5.2));
}
