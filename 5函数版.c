#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
// 顺序查找算法

int ser(int arr[], int Num)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == Num)
        {
            return i + 1; // 找到元素，返回下标
        }
    }
    return -1; // 没找到，返回-1
}

// 输出结果
void print(int index)
{
    if (index == -1)
    {
        printf("在数组中不存在数字\n");
        printf("-1");
    }
    else
    {
        printf("数字在数组中的位置为: %d\n", index);
    }
}

// 生成随机数并填充数组
void Num(int arr[])
{
    srand(time(NULL)); // 初始化随机数种子
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100; // 假设随机数范围为0到99
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[N];
    Num(arr); // 填充数组
    int sum;
    printf("请输入要查找的数字: ");
    scanf("%d", &sum);
    int index = ser(arr, sum); // 查找数字
    print(index);              // 输出结果
    return 0;
}