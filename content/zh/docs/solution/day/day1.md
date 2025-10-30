---
title: "day 1"
date: 2025-10-30T19:09:30+08:00
categories: ""
tags: ""
series: ""
series_order: ""
type: ""
---

{{< katex />}}



## 第 1 天

### 牛客 | [箭形图案](https://ac.nowcoder.com/acm/problem/22056)


{{% hint info %}}
{{% details "题目" %}}
# 箭形图案

题号：NC22056

时间限制：C/C++/Rust/Pascal 1秒，其他语言2秒

空间限制：C/C++/Rust/Pascal 256 M，其他语言512 M
64bit IO Format: %lld

## 题目描述 

KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的箭形图案。

## 输入描述:

本题多组输入，每行一个整数（2~20）。

## 输出描述:

针对每行输入，输出用“*”组成的箭形。

## 示例

### 示例1

输入
```
2
```
输出
```
    *
  **
***
  **
    *
```

### 示例2

输入
```
3
```
输出
```
      *
    **
  ***
****
  ***
    **
      *
```
### 示例3

输入
```
4
```
输出
```
        *
      **
    ***
  ****
*****
  ****
    ***
      **
        *
```
{{% /details %}}
{{% /hint %}}


{{% hint info %}}
{{% details "解法一、暴力" %}}

{{< tabs id >}}
{{% tab "c " %}}
```c 
#include <stdio.h>
int main(){
    int n;
    while (scanf("%d", &n) != EOF){

  for(int i = 1; i <= n + 1; i++){
    for(int j = 1; j <= 2*(n + 1 - i)  ; j++){
      printf(" ");
    }
    for(int k = 1; k <= i; k++){
        printf("*");
    }
    
    printf("\n");
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= 2*i ; j++){
      printf(" ");
    }
    for(int k = n - i + 1; k > 0; k--){
        printf("*");
    }
    
    printf("\n");
  }

    }
}

```

{{% /tab %}}
{{% tab "python" %}}



{{% /tab %}}

{{< /tabs>}}

{{% /details %}}
{{% /hint %}}


### 洛谷 | [平均分类](https://www.luogu.com.cn/problem/P5719)

{{% hint info %}}
{{% details "题目" %}}

# P5719 【深基4.例3】分类平均

## 题目描述

给定 $n$ 和 $k$，将从 1 到 $n$ 之间的所有正整数可以分为两类：A 类数可以被 $k$ 整除（也就是说是 $k$ 的倍数），而 B 类数不能。请输出这两类数的平均数，精确到小数点后 $1$ 位，用空格隔开。

数据保证两类数的个数都不会是 $0$。

## 输入格式

输入两个正整数 $n$ 与 $k$。

## 输出格式

输出一行，两个实数，分别表示 A 类数与 B 类数的平均数。精确到小数点后一位。

## 输入输出样例 #1

### 输入 #1

```
100 16
```

### 输出 #1

```
56.0 50.1
```

## 说明/提示

数据保证，$1 \leq n\leq 10000$，$1 \leq k \leq 100$。
{{% /details %}}
{{% /hint %}}


{{% hint info %}}
{{% details "解法" %}}
```c 
#include <stdio.h> 
int main(){
  int m, n;
  int cnt1 = 0, cnt2 = 0;
  int sum1 = 0, sum2 = 0;
  scanf("%d%d", &m, &n);
  for(int i = 1; i <= m; i++){
    if(i % n == 0){
      cnt1++;
      sum1 += i;

    }
    else {
      cnt2++;
      sum2 += i;
    }
  }
  printf("%.1f %.1f", (double)sum1 / cnt1, (double)sum2 / cnt2);

}

```
{{% /details %}}
{{% /hint %}}


### 力扣 | [两数之和](https://leetcode.cn/problems/two-sum/description/)

{{% hint info %}}
{{% details "题目" %}}
## 题目描述

<!-- description:start -->

<p>给定一个整数数组 <code>nums</code>&nbsp;和一个整数目标值 <code>target</code>，请你在该数组中找出 <strong>和为目标值 </strong><em><code>target</code></em>&nbsp; 的那&nbsp;<strong>两个</strong>&nbsp;整数，并返回它们的数组下标。</p>

<p>你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。</p>

<p>你可以按任意顺序返回答案。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [2,7,11,15], target = 9
<strong>输出：</strong>[0,1]
<strong>解释：</strong>因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [3,2,4], target = 6
<strong>输出：</strong>[1,2]
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [3,3], target = 6
<strong>输出：</strong>[0,1]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= target &lt;= 10<sup>9</sup></code></li>
	<li><strong>只会存在一个有效答案</strong></li>
</ul>

<p>&nbsp;</p>

<p><strong>进阶：</strong>你可以想出一个时间复杂度小于 <code>O(n<sup>2</sup>)</code> 的算法吗？</p>

<!-- description:end -->
{{% /details %}}
{{% /hint %}}


{{% hint info %}}
{{% details "解法 " %}}

{{< tabs id >}}
{{% tab "c " %}}

```c 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(target == nums[i] + nums[j]){
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}
```

{{% /tab %}}
{{% tab "python" %}}
```python 
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i, x in enumerate(nums):
            if (y := target - x) in d:
                return [d[y], i]
            d[x] = i

```


{{% /tab %}}

{{< /tabs>}}

{{% /details %}}
{{% /hint %}}
