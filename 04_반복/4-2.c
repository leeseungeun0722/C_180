// 정수값 2개를 읽어 들여 작은 수 부터 큰 수 까지 모든 정수를 더한 값 출력

#include <stdio.h>

int main (void)
{
    int a,b;
    int sum = 0;
    int i = 0;

    printf("정수 1 : ");
    scanf("%d",&a);

    printf("정수 2 : ");
    scanf("%d",&b);

    if (a > b)
    {
        for(i = b; i <= a; i++)
        {
            sum += i;
        }
        printf("%d이상 %d이하의 모든 정수를 더한 값은 %d입니다\n",b,a,sum);
    }

    else if (a < b)
    {
        for(i = a; i <= b; i++)
        {
            sum += i;
        }
        printf("%d이상 %d이하의 모든 정수를 더한 값은 %d입니다\n",a,b,sum);
    }
}