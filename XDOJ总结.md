<p style="font-size:32px;">一.易错以及需要注意的总结</p>

**1.字符串读取操作**

用`fgets(s, sizeof(s), stdin)`读取整行，必须用`s[strcspn(s, "\n")] = '\0'`去掉`fgets`读取的换行符。

**2.多组输入未重置变量**

多组输入时（`while(scanf(...))`），统计类变量（如`cnt`、`sum`）未重置，导致结果叠加；应每组输入开始时将计数器、临时变量重置为初始值（如`cnt=0`、`tmp=0`）。

**3.数组下标越界**

① 循环条件写`i<=n`（正确应为`i<n`）；② 二维数组行 / 列下标搞反（如矩阵判断时`a[j][i]`代替`a[i][j]`）；

**4.char 数组未初始化**

定义`char s[1000]`、`char words[100][100]`后未初始化，内存残留垃圾值，字符串遍历 / 打印时乱码。应定义时`char s[1000] = {0}`

**5.字符转数字忘减`'0'`**

直接用`s[i]`代替数字值（如`tmp = tmp*10 + s[i]`），实际取到的是 ASCII 码（`'5'`=53），而非实际数值 5；

必须用`tmp = tmp*10 + (s[i] - '0')`，利用 ASCII 码差值转成实际数字。

**6.遗漏字符串结束符`'\0'`**

① 拼接单词 / 数字后未加`'\0'`；② char 二维数组存储字符串时未手动补`'\0'`；

**7.数字段为 0 时遗漏存储（拼数字专属坑）**

用`if(tmp>0)`判断是否存储数字段，导致`"a0"`“`abc123d0`” 中的 0 被漏掉；可新增`in_num`标志位（1 = 正在拼接数字），只要`in_num=1`就存储（无论`tmp`是否为 0）。

**8.循环次数冗余**

冒泡排序内层循环写`j<n`，重复比较已排好的元素；正确应为`j<n-1-i`

**9.浮点数输出精度错误**

- 错误：用`%d`输出浮点数、用`%f`输出`int`型，或未按要求保留小数位数（如题目要求保留 2 位却写`%f`）；
- 正确：严格匹配格式符（`int`→`%d`、`float/double`→`%f`），保留小数用`%.2f`。

<p style="font-size:32px;">二.常用函数</p>

**1.素数判断**

```C
// 判断n是否为素数，返回1是，0否
int is_prime(int n) {
    if (n <= 1) return 0; // 1不是素数
    if (n == 2) return 1; // 2是唯一偶素数
    if (n % 2 == 0) return 0; // 偶数直接排除
    // 只需判断到sqrt(n)，减少循环次数
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}
```

**2.最大公约数&&最小公倍数**

```C
// 求a和b的最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
// 最小公倍数LCM = a*b / GCD（避免溢出：a/GCD*b）
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
```

**3.冒泡排序**

```C
// 数组nums，长度n
void bubble_sort(int nums[], int n) {
    // 外层：排序轮数（n-1轮即可）
    for (int i = 0; i < n - 1; i++) {
        // 内层：每轮比较次数（已排好的i个元素无需比较）
        for (int j = 0; j < n - 1 - i; j++) {
            // 升序：前>后则交换；降序：前<后则交换
            if (nums[j] > nums[j+1]) { // 升序（改成<为降序）
                int tmp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tmp;
            }
        }
    }
}
```

**4.选择排序**

```C
void select_sort(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; // 假设当前位置是最小值下标
        // 找i之后的最小值下标
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[min_idx]) {
                min_idx = j;
            }
        }
        // 交换当前位置和最小值位置
        int tmp = nums[i];
        nums[i] = nums[min_idx];
        nums[min_idx] = tmp;
    }
}
```

**5.数组逆向排序**

```C
void reverse_arr(int nums[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = nums[i];
        nums[i] = nums[n - 1 - i];
        nums[n - 1 - i] = tmp;
    }
}
```

**6.合理读取字符串**

```C
char s[1000];
fgets(s, sizeof(s), stdin); // 读整行（含空格）
s[strcspn(s, "\n")] = '\0'; // 去掉fgets的换行符（核心！）
```

**7.从字符串中提取数而非独立的数字**

```C
// 字符c是数字字符（如'5'），转成整数5
int char_to_num(char c) {
    return c - '0'; // 易错点：别漏减'0'，否则取到ASCII值
}

// 拼接连续数字（如'1'→'2'→'3'→123）
long concat_num(char s[], int n) {
    long tmp = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            tmp = tmp * 10 + (s[i] - '0'); // 核心公式（原理：对已经存下的数乘以10以升位，然后加上数字本身）
        }
    }
    return tmp;
}
```

**8.拆分字符串中的单词**

```c
// 输入字符串s，拆分到words二维数组，返回单词个数
int split_words(char s[], char words[100][100]) {
    int word_cnt = 0, idx = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ') {
            if (idx > 0) { // 避免空单词
                words[word_cnt][idx] = '\0';
                word_cnt++;
                idx = 0;
            }
        } else {
            words[word_cnt][idx++] = s[i];
        }
    }
    if (idx > 0) { // 处理最后一个单词
        words[word_cnt][idx] = '\0';
        word_cnt++;
    }
    return word_cnt;
}
```

