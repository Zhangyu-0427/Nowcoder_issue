#include <stdio.h>
void Sort_PO(int arr[],int n);
//n为所查找ID的位数 m为ID 数组arr为编码库 s为编码总数量
int last_ret(int arr[],int n,int m,int s);
int POW_10(int n);
int main()
{
    int n = 0, q = 0;//藏书数量和读者数量
    int i = 0;
    int ID_book[1000],ID_demand_len[1000],ID_demand[1000];
    //数据输入
    scanf("%d %d",&n,&q);
    for(i = 0; i<n; i++)
        scanf("%d",&ID_book[i]);
    for(i = 0; i<q; i++)
        scanf("%d %d",&ID_demand_len[i],&ID_demand[i]);
    //调用函数
    Sort_PO(ID_book,n);//将图书编码按从小到大排序
    //输出结果
    for(i = 0; i<q; i++)
    {
        int ret = last_ret(ID_book,ID_demand_len[i],ID_demand[i],n);
        printf("%d\n",ret);
    }
    return 0;
}
void Sort_PO(int arr[],int n)//利用冒泡排序实现数组正序排列
{
    int i, j;
    int flag = 1;
    for(i = 0; i<n-1; i++)
    {
        for(j = 0; j<n-i-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
                flag = 0;
            }
        }
        if(flag)
            break;
    }
}
int last_ret(int arr[],int n,int m,int s)
{
    int i = 0, j = 0;
    int tmp;
    int sum = 0;
    for(i = 0; i<s; i++)//从小到大遍历编码
    {
        tmp = arr[i];
        sum = 0;
        for( j = 0; j<n; j++)
        {
            sum += (tmp%10)*POW_10(j);
            tmp /= 10;
        }
        if(m == sum)
        {
            return arr[i];
        }
    }
    return -1;
}
int POW_10(int n)
{
    int i = 0;
    int mult = 1;
    for(i = 0; i<n; i++)
        mult *= 10;
    return mult;
}