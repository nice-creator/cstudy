#include <stdio.h>
int main()
{
    float x = 3.14f;
    int j = 0;
    // 强制类型转换只是临时的转换，只在当前语句转换，在后边的语句中不会更改x的值
    j =(int)x;
    printf("j = %d , x=%f\n",j,x);

    return 0;

}
