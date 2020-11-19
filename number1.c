#include <stdio.h>
//数据类型
/* char 字符型，char定义的每个字符型变量占用1个字节，多个字符型组成字符串
 * short 短整型，short定义的每个短整型变量占用2个字节
 * int 整数型，int定义的每个整数型变量占4个字节
 * long 长整型，long定义的长整型变量类型在32位系统占4个字节，在64位系统占8个字节1
 * float 浮点型，float定义的浮点型变量占用4个字节
 * double 双浮点型，double定义的双浮点型变量占8个字节
 * signed 有符号的，定义char，整型的时候用signed修饰，代表数据是由有号的，取值范围是负数到正数。signed默认是省略的
 * unsigned 无符号的，unsigned在定义整型的时候修饰，代表定义的数据是无符号的，取值范围只能是正数*/

//整型的存储默认是有符号的，4个字节共32个bit位，其中第一个比特位存储的是符号，后边31位存储的是数值
//无符号的情况下整型的4字节32位全部都是数值，取值的绝对值也就比无符号类型取值的据绝对值要大
int main( )
{
    char a = 'a';
    short int b=10;
    int c;
    long int d;
    float e;
    double f;
    printf("char类型占用%d个字节\n",sizeof(a));
    printf("short类型占用%d个字节\n",sizeof(b));
    printf("int类型占用%d个字节\n",sizeof(c));
    printf("long类型占用%d个字节\n",sizeof(d));
    printf("float类型占用%d个字节\n",sizeof(e));
    printf("double类型占用%d个字节\n",sizeof(e));
    return 0;
}
