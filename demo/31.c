#include <stdio.h>
int main()
{
    char str[100]="hello";
    int i=0;
    // 逐个字符遍历
    for(i=0;i<6;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    
    // 直接整体遍历调用数组
    printf("%s\n",str);
        
    return 0;
}
