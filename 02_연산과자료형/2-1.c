#include <stdio.h>

int main (void)
{

	int a = 0;

	printf("정수를 입력하세요 : ");
	scanf("%d",&a);

	printf("10을 더하면 %d입니다\n", a + 10);
	printf("10을 뺴면 %d입니다\n", a - 10);
	printf("10을 곱하면 %d입니다\n", a * 10);
	printf("10을 나눈 몫은  %d입니다\n", a / 10);
	printf("10을 나눈 나머지는  %d입니다\n", a % 10);
}
