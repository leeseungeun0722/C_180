// 정숫값을 읽어 들여 0까지 카운트다운하는 프로그램을 작성

#include <stdio.h>

int main (void)
{
    int a;
    int i;

    printf("양의 정수를 입력하세요 : ");
    scanf("%d",&a);

    if (a == 0)
        printf("0\n");
    
    else if (a < 0)
        return 0;
    
    else
    {
        for(i = a; i >= 0; i--)
        {
                printf("%d ",i);
        }
        printf("\n");
    }
}