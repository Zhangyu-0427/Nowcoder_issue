//题目链接: https://ac.nowcoder.com/acm/problem/22218
//AC_date: 2021/5/30
#include <stdio.h>
int Max_arr(int arr[],int n);
int main()
{
    int arr_1[100],arr_2[100];
    int n,m;
    int i;
    scanf("%d %d",&n,&m);
    for(i = 0; i<n; i++)
        scanf("%d",&arr_1[i]);
    for(i = 0; i<m; i++)
        scanf("%d",&arr_2[i]);
    printf("%d",Max_arr(arr_1,n)+Max_arr(arr_2,m));
    return 0;
}
int Max_arr(int arr[],int n)
{
    int max = 0;
    int i;
    for( i = 0; i<n; i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}