#include <stdio.h>
int main()
{
    int arr[3][4]={0};
    int i=0,j=0;
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        int j=0;
        for(j=0;j<4;j++)
        {
            sum+=arr[i][j];
        }    
        printf("第%d行的平均值是%d\n",i,sum/4);
    }
    return 0;
}
