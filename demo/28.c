#include<stdio.h>
#include<string.h>
void tongji(char a[111])
{
    int len=0;
    len = strlen(a);
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int i = 0;

    for(i;i<len;i++)
    {
        if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i] <= 'z'))
            {
                b++;
            }
        else if (a[i]>='0' && a[i] <='9')
            {
                c++;
            }
        else if (a[i]==' ')
            {
                d++;
            }
        else
            {
                e++;
            }
    }
    printf("%d %d %d %d \n", b, c, d, e);

}

int main()
{   
    char a[111];
    scanf("%s",&a);
    tongji(a);
    return 0;
}
