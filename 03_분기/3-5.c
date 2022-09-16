#include <stdio.h>

int main (void)
{

	int a,b = 0;

	printf("정수 두개 입력하세요\n");
	printf("A : ");
	scanf("%d",&a);

	printf("B : ");
	scanf("%d",&b);

	if(a == b)

		printf("A와 B는 같습니다\n");
	
	else if(a > b)


		printf("A는 B보다 큽니다\n");

	else
		printf("A는 B보다 작습니다\n");
}

