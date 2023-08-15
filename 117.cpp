#include <stdio.h>
#include <math.h>
int main()
{
//	int d=300000;
//	int p=6000;
//	int m;
	float d=300000,p=6000,r=0.01,m;
	m=log10(p/(p-d*r))/log10(1+r);
	printf("m=%f\n",m);
}
