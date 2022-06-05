#include <stdio.h>
#include <math.h>

float	koh(float v, float n)
{
	float x = v*v/(n - 1);
	x = sqrt(x);

	return (x);
}

int main()
{
	float	x;
	float	v;
	float	n;

	printf("Duzeltme miktarı giriniz: ");
	scanf("%f",&v);
	printf("\nOlcme gunu/sayısı giriniz: ");
	scanf("%f",&n);
	
	x = koh(v, n);
	printf("Karesel Ortalama Hata: +-%f",x);
}
