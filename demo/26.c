#include <stdio.h>
int main()
{
    int sum = 0;
    int i = 1;
    for(i;i<101;i++)
    {
        if(i==50)
            {
                continue; //continue结束本次循环，从当前位置 跳出，进入下一次循环
            }
        sum+=i;
    }
    printf("%d\n",sum);

    return 0;
}
