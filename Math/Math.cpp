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

	}
}

float ln(float a)
{

}

float log(float a, float b)
{
	
}

float pow(float a, float b)
{
	for(int i=0;i<b;i++){
		a*=a;
	}
	return a;
}

int main()
{
	printf("%f",abs(-5.2));
}
