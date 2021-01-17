#include <stdio.h>
int main()
{
    char str1[]={'h','e','l','l','o'}; 
    char str2[]="hello";
    printf("%d\n",sizeof(str1));  //5
    printf("%d\n",sizeof(str2));  //6
    // 定义字符数组的时候，如果没有定义大小
    // 采用逐个字符定义不会再末尾补\0，空位符
    return 0;
}
