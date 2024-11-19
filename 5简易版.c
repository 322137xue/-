#include <stdio.h>
#define N 10

int main()
{
    int sun, i, arr[N];

    // 填充数组
    for (i = 0; i < N; i++)
    {
        arr[i] = i;
    }

    // 输出数组中的数字
    printf("数组中的数字: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 输入要查找的数字
    printf("请输入要查找的数字: ");
    scanf("%d", &sun);

    // 查找数字
    int found = 0; // 标记是否找到
    for (i = 0; i < N; i++)
    {
        if (arr[i] == sun)
        {
            printf("下标 %d\n", i);
            found = 1;
            break;
        }
    }

    // 如果没有找到
    if (!found)
    {
        printf("-1\n");
    }

    return 0;
}