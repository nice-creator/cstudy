#include <stdio.h>
//输入一个四位数，得到每一个数
int main()
{
    int num;
    int a,b,c,d;
    printf("输入一个四位数\n");
    scanf("%d",&num);
    a = num/1000;
    b = (num-a*1000)/100;
    c = (num-a*1000-b*100)/10;
    d = (num-a*1000-b*100-c*10);

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);

    return 0;
}

