#include <stdio.h>
int main()
{
    char ch = 'a';
    ishort data = 20;
    // 由于char short自身字节数过小，很容易溢出
    // 所以只要char short 参加运算 都会将自身转换为int
    printf("%d\n",sizeof(ch+ch));
    printf("%d\n",sizeof(ch+data));
    printf("%d\n",sizeof(data+data));
    return 0;

}
