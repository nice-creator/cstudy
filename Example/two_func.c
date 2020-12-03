/* two_func.c --一个文件中包含两个函数 */
#include <stdio.h>
void butler(void); //函数原型，也叫函数声明，指明函数属性和返回值，告诉编译器正在使用某函数
int main(void)
{
    printf("i will summon the butler function.c\n");
    butler();// 加括号调用
    printf("Yes,Bring me some tea and writeable DVDs.\n");
    
    getchar();//按键退出

}
void butler(void)//定义函数，函数头-花括号-函数体
{
    printf("your rang,sir?\n");
}
