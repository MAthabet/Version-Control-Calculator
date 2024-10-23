#include <stdio.h>

#define e 2.718281828459045

float abs(float x)
{
	if (x >= 0) return x;
	return -x;
}

float add(float x, float y){
return x+y;
}

float sub(float x, float y){
return x-y;
}

int remind(int x, int y){

	return x%y;

}


float exp(float a)
{
	float result;
	for (int i = 0; i <= 100; i++)
	{
		result += pow(x, i) / factorial(i);
	}
	return result;
}

float ln(float a)
{
	float result
	for(int i=1; i <= 100; i++)
	{
		result += ((1 - i % 2) - (i % 2)) * pow(x - 1, i) / i;
	}
	return result;
}

float log(float a, float b)
{
	
}

float pow(float a, float b)
{
	return exp(b*ln(a));
}

int main()
{
	printf("%f",abs(-5.2));
}
