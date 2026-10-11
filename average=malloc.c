#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr = NULL;// 用于存储动态分配的数组
    int sum = 0;// 用于计算数组元素的总和
    double average; // 用于计算平均值

    printf("请输入数组元素个数: ");
    if (scanf("%d", &n) != 1 || n <= 0) {// 检查输入是否为正整数
        printf("输入不合法，元素个数必须是正整数。\n");
        return 1;
    }

    arr = (int *)malloc(n * sizeof(int));// 动态分配内存空间用于存储 n 个整数
    if (arr == NULL) {// 检查内存分配是否成功
        printf("内存申请失败。\n");
        return 1;
    }

    printf("请输入 %d 个整数:\n", n);  // 提示用户输入数组元素
    for (int i = 0; i < n; i++) {// 循环读取用户输入的整数
        scanf("%d", &arr[i]);   // 将输入的整数存储到数组中
        sum += arr[i];  // 累加数组元素的总和
    }

    average = (double)sum / n;

    printf("平均值 = %.2f\n", average);//   输出平均值，保留两位小数

    free(arr);// 释放动态分配的内存空间
    arr = NULL;

    return 0;
}