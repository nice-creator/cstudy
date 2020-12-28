#include <stdio.h>
int main(void)
{
    int a;
    int b;
    int num;
    printf("输入两个数，用空格分开\n");
    scanf("%d %d",&a,&b);
    
    //if (a>b){
    //     num = a;   
    //    }
    //else{
    //     num = b; 
    //    }
    //条件运算符
    num = (a>b)?a:b;
    printf("num的值是%d\n",num);
        
    return 0;
}

