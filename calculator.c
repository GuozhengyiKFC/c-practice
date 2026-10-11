#include <stdio.h>

int main(void)
{
    double a, b, result;
    char op;// 用于存储运算符

    printf("=== 简易计算器 ===\n");
    printf("支持 + - * /，输入 q 退出\n\n");

    while (1) {// 无限循环，直到用户选择退出
        printf("请输入表达式：");

        /* 读取三个部分：操作数 运算符 操作数 */
        if (scanf("%lf %c %lf", &a, &op, &b) != 3) {// 检查输入是否正确，如果输入了q或其他不匹配的内容，scanf返回值就会小于3，视为退出信号。
            int ch;//
            while ((ch = getchar()) != '\n' && ch != EOF);  //清空缓冲区 ch=getchar() 读取一个字符，直到遇到换行符!='\n'或文件结束符 EOF
            printf("已退出，再见！\n");
            break;// 退出循环
        }

        switch (op) {// 根据运算符执行相应的计算op=operator运算符
            case '+':
                result = a + b;
                printf("%.2f + %.2f = %.2f\n\n", a, b, result);
                break;

            case '-':
                result = a - b;
                printf("%.2f - %.2f = %.2f\n\n", a, b, result);
                break;

            case '*':
                result = a * b;
                printf("%.2f * %.2f = %.2f\n\n", a, b, result);
                break;

            case '/':
                if (b == 0) {
                    printf("错误：除数不能为 0！\n\n");
                } else {
                    result = a / b;
                    printf("%.2f / %.2f = %.2f\n\n", a, b, result);
                }
                break;

            default://当用户输入的运算符不是加减乘除时告诉用户出错了
                printf("错误：不支持的运算符 '%c'\n\n", op);
                break;
        }
    }

    return 0;
}