#include <stdio.h>
int main()
{
    char letter;
    printf("please input a letter\n");
    scanf("%s",&letter);
    if(letter>='a' && letter<='z')
        {
            // printf("%d\n",letter);
            printf("%c\n",letter-32);
        }
    else if(letter>='A' && letter<='Z')
        {
            printf("%c\n",letter+32);
        }  
    else
    {
        printf("input error,please input a letter");
    }         
    return 0;
}