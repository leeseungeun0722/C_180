#include <stdio.h>

int main (void)
{

	int num = 0 ;

	printf("정수를 입력하세요 : ");
	scanf("%d",&num);

	if(num % 2 == 0)

		printf("이 값은 짝수입니다\n");
	else
		printf("이 값은 홀수입니다\n");
}
