#include <stdio.h>

int main (void)
{

	int min,a,b,c = 0;


	printf("A : ");
	scanf("%d",&a);

	printf("B : ");
	scanf("%d",&b);
	
	printf("C : ");
	scanf("%d",&c);

	min = a;

	if(b < min) 

		min = b;

	if(c < min)

		min = c;

	printf("최솟값은 %d입니다\n",min);



}
