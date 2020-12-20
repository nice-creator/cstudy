#include <stdio.h>
int main()
{
    int num;
    int a,b,c,d;
    printf("输入一个四位数\n");
    scanf("%d",&num);

    a = num/1000;
    b = num%1000/100;
    c = num%1000%100/10;
    d = num%1000%100%10;
    
    printf("%d-%d-%d-%d\n",a,b,c,d);

    return 0;



}



