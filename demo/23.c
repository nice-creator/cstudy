#include <stdio.h>
int main(void)
{
    int i = 0;
    int num = 0;
    while(i<=100)
        {
            num +=i;
            i = i+1;
        }
    printf("%d\n",num);

    return 0;
}
