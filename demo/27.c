#include <stdio.h>
int main()
{
    printf("111\n");
    goto there;
    printf("222\n");
    printf("333\n"); 
    printf("444\n");
    printf("555\n");
there: 
    printf("666\n");
    
    return 0;	
}
