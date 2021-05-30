//题目链接: https://ac.nowcoder.com/acm/problem/15375
//AC_date: 2021/5/30
#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0, j = 0;
    int sum = 0, mult = 1;
    
    scanf("%d",&n);
    for(i = 1; i<=n; i++)
    {
        mult = 1;//清空计算上个数阶乘的数据
        for(j=1; j<=i; j++)
        {
            mult *= j;
        }
        sum += mult;
    }
    
    printf("%d\n",sum);
    return 0;
}