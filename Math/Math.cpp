#include <stdio.h>

#define e 2.718281828459045

float abs(float x)
{
	if (x >= 0) return x;
	return -x;
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
}
int factorial(int a)
{
	if (a == 0 || a == 1)
        return 1;
    return a * factorial(a - 1);
}
float ln(float a)
{

}

int pow(int a, int b)
{
	for(int i=0;i<b;i++){
		a*=a;
	}
	return a;
}

float root(float a, float b)
{
	int x = a/b;
	int i = 0;
	int prevx = 0;
	while(1)
	{
		x= (1/b)*((b-1)*x+a/pow(x,b-1));
		if(abs(x-prevx)<0.00001) break;
		prevx = x;
	}
	return x;
}
