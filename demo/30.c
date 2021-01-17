#include <stdio.h>
int main()
{
    int arr[3][4]={0};
    int i=0,j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(j=0;j<4;j++)
    {
        int sum=0;
        for(i=0;i<3;i++)
        {
            sum+=arr[i][j];
        }
        printf("第%d列的平均值是%d\n",j+1,sum/3);
    }

    return 0;
}
