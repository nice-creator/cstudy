#include <stdio.h>
#include <string.h>

void tongji(char a[], int b, int c, int d, int e)
{
    int len = 0;
    len = strlen(a);
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    for(int i=0;i<len;i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            {
                b++;
            }
         else if (a[i] >= '0' && a[i] <= '9')
             {
                c++;
            }
         else if (a[i] == ' ')
             {
                d++;
             }
         else
              {
                e++;           
             }
    }
}
int main()
{
    int b,c,d,e;
    char a[10000];
    scanf("%[^\n]",a)
    tongji(a,b,c,d,e);
    printf("%d%d%d%d",b,c,d,e);
    return 0;
}








