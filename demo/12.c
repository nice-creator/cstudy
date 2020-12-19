#include <stdio.h>
int main()
{
    int data1 = -20;
    unsigned int data2 = 10;
    if(data1+data2 >0)
    {
        printf(">0\n");    
    }
    // 不同数据类型运算时，会先将有符号类型转换为无符号类型
    // data1转换为无符号类型会是一个很大的数
    // 结果是正数
    else if(data1+data2 <0)
    {
        printf("<0\n");
    }
}
