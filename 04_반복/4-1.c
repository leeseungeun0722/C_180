//읽어 들인 정숫값의 부호 판정(원하는 만큼 반복)

#include <stdio.h>

int main (void)
{
    
    int b;

    do {

        int a;

            printf("정수 값을 입력하세요 : ");
            scanf("%d",&a);

            if( a == 0)
                printf("이 수는 0입니다.\n");
                
            else if (a > 0)
                printf("이 수는 양수입니다\n");

            else
                printf("이 수는 음수입니다\n");

            printf("한 번 더? [yes - 0 / no - 1] : ");
            scanf("%d",&b);

    } while(b == 0);

    return 0;


}