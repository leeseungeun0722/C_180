#include <stdio.h>

int main (void)
{

	int a,b = 0;

	printf("2개의 정수를 입력하세요 : ");
	scanf("%d %d",&a,&b);

	if(a % b == 0)

		printf("B는 A의 약수입니다\n");
	else
		printf("B는 A의 약수가 아닙니다\n");
}
