#include <stdio.h>
#include <stdlib.h>  // 用于abs()取绝对值

// 计算数字的位数（n为非负整数）
int weishu(long long n) {
    if (n == 0) return 1;  // 0的位数是1
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    long long a;  // 用long long支持更大数字
    scanf("%lld", &a);  // 匹配long long类型

    // 处理负数：取绝对值（数字本身与符号无关）
    long long num = llabs(a);  // llabs专门处理long long的绝对值

    // 1. 计算位数（直接调用函数，无需冗余循环）
    int b = weishu(num);

    // 2. 计算最大数字和最小数字（共用临时变量，减少重复）
    int max = 0, min = 9;
    long long temp = num;

    if (num == 0) {
        // 特殊情况：0的最大和最小数字都是0
        max = 0;
        min = 0;
    } else {
        // 一次循环同时计算max和min，减少遍历次数
        while (temp > 0) {
            int digit = temp % 10;  // 提取当前位
            if (digit > max) max = digit;
            if (digit < min) min = digit;
            temp /= 10;  // 处理下一位
        }
    }

    // 输出结果
    printf("%d %d %d\n", b, max, min);
    return 0;
}
