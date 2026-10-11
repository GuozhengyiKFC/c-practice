#include <stdio.h>

// 交换函数：接收两个 int 指针
void swap(int *a, int *b) {
    int temp = *a;   // 保存 a 指向的值
    *a = *b;         // 把 b 指向的值赋给 a 指向的位置
    *b = temp;       // 把保存的值赋给 b 指向的位置
}

int main() {
    int x = 10, y = 20;

    printf("交换前: x = %d, y = %d\n", x, y);

    swap(&x, &y);    // 调用 swap 函数，传入 x 和 y 的地址

    printf("交换后: x = %d, y = %d\n", x, y);

    return 0;
}