# include <stdio.h>
int main()
{
    char str[5][10] = {"hello","world","lidawei","hahaah","let'sgo"};   
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
