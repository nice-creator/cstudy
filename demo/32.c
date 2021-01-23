#include <stdio.h>
int main()
{
    char buf[10];
    printf("please shu ru \n");
    //scanf("%s",buf); // 不能获取带空格的字符
    //gets(buf); //获取键盘输入的时候，可以获取带空格的字符串
               //不会管buf的大小,容易造成内存污染
    fgets(buf,sizeof(buf),stdin); //推荐使用fgets
    printf("%s",buf);  
    return 0;
}