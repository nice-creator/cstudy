#include <stdio.h>
int main()
{
    int num=0;
    printf("输入数，查看是否能被3整除\n");
    scanf("%d",&num);
    if(num%3==0)
    {
        printf("您输入的数可以被3整除\n");
    }
    else
    {
        printf("您输入的数不可以被3整除\n");
    }
}
