#include <stdio.h>

int main (void)
{

	int a,b,sum = 0;

	printf("두개의 정숫값을 입력하세요");
	scanf("%d %d", &a,&b);

	sum = (a+b) / 2;

	printf("평균값의 부호를 반전한 값은 %d입니다\n",-sum);


}
