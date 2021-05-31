//题目链接：https://ac.nowcoder.com/acm/problem/14334
//AC_date: 2021/5/31
#include <stdio.h>
void Sort_PO(int arr[],int n);
int main()
{
    int arr[4];
    int i = 0, sum = 0;
    while(scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]) != EOF)
    {
        sum = 0;
        Sort_PO(arr,4);
        for(i = 0; i<4; i++)
        {
            sum += arr[i]*POW_10(3-i);
        }
        printf("%d\n",sum);
    }
    return 0;
}
void Sort_PO(int arr[],int n)
{
    int i,j;
    for( i = 0; i<n-1; i++)
    {
        for(j = 0; j<n-1-i; j++)
        {
            if(arr[j+1]>arr[j])
            {
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
int POW_10(int n)
{
    int i = 0;
    int mult = 1;
    for(i = 0; i<n ;i++)
        mult *= 10;
    return mult;
        
}