---
title: "draft "
date: 2025-11-05T16:02:04+08:00
categories: ""
tags: ""
series: ""
series_order: ""
type: ""
draft: true
---

{{< katex />}}


## 回文数 c语言实现

以下是用C语言实现回文数判断的几种方法：

## 方法一：字符串方法（推荐）

```c 
#include <stdio.h> 
#include <stdbool.h>
#include <string.h>

bool huiwen(int x){
    if(x < 0) return false; 
    char str[20];
    sprintf(str, "%d", x);

    int l = 0;
    int r = strlen(str) - 1;
    while(l < r){
        if(str[l] != str[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;

}

int main(){
    // char Yu[] = "Dear, Yuoek";
    // size_t length = strlen(Yu);
    // printf("Length: %zu\n", length);
    int num = 12321;
    if(huiwen(num)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;

}
```

```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) return false; // 负数不是回文数
    
    char str[20];
    sprintf(str, "%d", x); // 将数字转换为字符串
    
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int num = 12321;
    //printf("请输入一个整数: ");
    //scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("%d 是回文数\n", num);
    } else {
        printf("%d 不是回文数\n", num);
    }
    
    return 0;
}
```

## 方法二：数学方法（反转数字）

```c
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) return false; // 负数不是回文数
    if (x == 0) return true; // 0是回文数
    
    long long reversed = 0;
    int original = x;
    
    // 反转数字
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    
    return original == reversed;
}

int main() {
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("%d 是回文数\n", num);
    } else {
        printf("%d 不是回文数\n", num);
    }
    
    return 0;
}
```

## 方法三：优化版数学方法（只反转一半）

```c
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    // 特殊情况处理
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    
    int reversed = 0;
    
    // 只反转数字的一半
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    
    // 当数字长度为奇数时，通过 reversed/10 去除中间位
    return x == reversed || x == reversed / 10;
}

int main() {
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("%d 是回文数\n", num);
    } else {
        printf("%d 不是回文数\n", num);
    }
    
    return 0;
}
```

## 运行示例

```
请输入一个整数: 12321
12321 是回文数

请输入一个整数: 12345
12345 不是回文数
```

## 方法比较

- **方法一**：简单直观，容易理解
- **方法二**：数学方法，避免字符串操作
- **方法三**：最优解，时间复杂度 O(log₁₀n)，空间复杂度 O(1)

推荐使用方法三，因为它是最优的解决方案。


必答[填空题] 3.  查询c2课程成绩在c2课程平均分以上的学生学号。
Select  sno

from   sc 

where  cno=‘c2’ and ______________________________


11月5日:
牛客  小苯的数字排序: https://ac.nowcoder.com/acm/problem/297830
洛谷  成绩排序: https://www.luogu.com.cn/problem/B2159              
力扣  回文数: https://leetcode.cn/problems/palindrome-number/description/

  用谓词IN实现查询所有学习了数据结构课（课程号为C4）的学生的学号和姓名。
SELECT S.SNO, SNAME   FROM  S

___________________________

```sql
SELECT S.SNO, S.SNAME
FROM S
WHERE S.SNO IN (
    SELECT SC.SNO
    FROM SC
    WHERE SC.CNO = 'C4'
);
```

或者使用连接查询的方式：

```sql
SELECT S.SNO, S.SNAME
FROM S
INNER JOIN SC ON S.SNO = SC.SNO
WHERE SC.CNO = 'C4';
```

**解释：**
- 子查询 `SELECT SC.SNO FROM SC WHERE SC.CNO = 'C4'` 找出所有选修了C4课程的学生学号
- 主查询通过 `IN` 谓词筛选出在子查询结果中的学生
- 最终返回这些学生的学号和姓名

四种写法
查询年龄不在20~22岁之间的学生的基本信息。
SELECT *

FROM  S

____________________


以下是四种不同的SQL写法，实现查询年龄不在20~22岁之间的学生基本信息：

**写法一：使用 NOT BETWEEN**
```sql
SELECT *
FROM S
WHERE age NOT BETWEEN 20 AND 22;
```

**写法二：使用逻辑运算符**
```sql
SELECT *
FROM S
WHERE age < 20 OR age > 22;
```

**写法三：使用 NOT 和 BETWEEN 组合**
```sql
SELECT *
FROM S
WHERE NOT (age BETWEEN 20 AND 22);
```

**写法四：使用子查询（虽然复杂但可行）**
```sql
SELECT *
FROM S
WHERE age NOT IN (
    SELECT age 
    FROM S 
    WHERE age BETWEEN 20 AND 22
);
```

**说明：**
- 写法一最简洁直观，推荐使用
- 写法二是最基础的逻辑表达方式
- 写法三通过NOT反转条件
- 写法四虽然可行，但效率较低，仅作思路参考

假设表S包含学生基本信息，age字段存储学生年龄。


