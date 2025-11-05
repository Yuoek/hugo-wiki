---
title: "day 8"
date: 2025-11-05T13:49:55+08:00
categories: ""
tags: ""
series: ""
series_order: ""
type: ""
draft: true
---

{{< katex />}}


## 第 8 天

### 牛客 | [排序危机](https://ac.nowcoder.com/acm/problem/277120)

{{% hint info %}}
{{% details "题目" %}}

# 排序危机 (NC277120)

**题号**: NC277120

**时间限制**: C/C++/Rust/Pascal 1秒，其他语言2秒

**空间限制**: C/C++/Rust/Pascal 256 M，其他语言512 M

## 题目描述

$\hspace{15pt}$ 小歪有一个同时包含了小写字母、大写字母和数字的字符串，他现在想要重新排列这些字符，使得小写字母都在左边，大写字母全在右边。注意，对于某两个小写字母，排序不会改变他们的相对位置。

## 输入描述

$\hspace{15pt}$ 第一行输入一个整数 $n\left(1\le n \le 10^5\right)$ 代表字符串的长度。

$\hspace{15pt}$ 第二行输入一个长度为 $n$ ，且由小写字母、大写字母和数字构成的字符串 $s$ 。

## 输出描述

$\hspace{15pt}$ 在一行上输出一个长度为 $n$ 的字符串，代表排序后的字符串。

## 示例

### 示例 1

**输入:**
```
5
Aa123
```

**输出:**
```
a123A
```

## 说明 
 
> 注意，对于数字字符 '1'、'2'、和 '3'，在输出时您不能改变他们彼此间的顺序，例如 "a321A" 就是错误的。

### 示例 2

**输入:**
```
14
D1dA1a4M5m14Ee
```

**输出:**
```
dame114514DAME
```

{{% /details %}}
{{% /hint %}}



### 洛谷 | [排队顺序](https://www.luogu.com.cn/problem/B3630)


{{% hint info %}}
{{% details "题目" %}}

# B3630 排队顺序

## 题目描述

有 $n(2 \le n\le 10^6)$ 个小朋友，他们的编号分别从 $1$ 到 $n$。现在他们排成了一个队伍，每个小朋友只知道他**后面**一位小朋友的编号。现在每个小朋友把他后面是谁告诉你了，同时你还知道排在队首的是哪位小朋友，请你从前到后输出队列中每个小朋友的编号。

## 输入格式

第一行一个整数 $n$，表示小朋友的人数。

第二行 $n$ 个整数，其中第 $i$ 个数表示编号为 $i$ 的小朋友后面的人的编号。如果这个数是 $0$，则说明这个小朋友排在最后一个。

第三行一个整数 $h$，表示排在第一个的小朋友的编号。

## 输出格式

一行 $n$ 个整数，表示这个队伍从前到后所有小朋友的编号，用空格隔开。

## 输入输出样例 #1

### 输入 #1

```
6
4 6 0 2 3 5
1
```

### 输出 #1

```
1 4 2 6 5 3
```
{{% /details %}}
{{% /hint %}}



### 力扣 | [对奇偶下标分别排序](https://leetcode.cn/problems/sort-even-and-odd-indices-independently/description/)


{{% hint info %}}
{{% details "题目" %}}
## 题目描述

<!-- description:start -->

<p>给你一个下标从 <strong>0</strong> 开始的整数数组 <code>nums</code> 。根据下述规则重排 <code>nums</code> 中的值：</p>

<ol>
	<li>按 <strong>非递增</strong> 顺序排列 <code>nums</code> <strong>奇数下标</strong> 上的所有值。
    <ul>
    	<li>举个例子，如果排序前 <code>nums = [4,<em><strong>1</strong></em>,2,<em><strong>3</strong></em>]</code> ，对奇数下标的值排序后变为 <code>[4,<em><strong>3</strong></em>,2,<em><strong>1</strong></em>]</code> 。奇数下标 <code>1</code> 和 <code>3</code> 的值按照非递增顺序重排。</li>
    </ul>
    </li>
    <li>按 <strong>非递减</strong> 顺序排列 <code>nums</code> <strong>偶数下标</strong> 上的所有值。
    <ul>
    	<li>举个例子，如果排序前 <code>nums = [<em><strong>4</strong></em>,1,<em><strong>2</strong></em>,3]</code> ，对偶数下标的值排序后变为 <code>[<em><strong>2</strong></em>,1,<em><strong>4</strong></em>,3]</code> 。偶数下标 <code>0</code> 和 <code>2</code> 的值按照非递减顺序重排。</li>
    </ul>
    </li>
</ol>

<p>返回重排 <code>nums</code> 的值之后形成的数组。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [4,1,2,3]
<strong>输出：</strong>[2,3,4,1]
<strong>解释：</strong>
首先，按非递增顺序重排奇数下标（1 和 3）的值。
所以，nums 从 [4,<em><strong>1</strong></em>,2,<em><strong>3</strong></em>] 变为 [4,<em><strong>3</strong></em>,2,<em><strong>1</strong></em>] 。
然后，按非递减顺序重排偶数下标（0 和 2）的值。
所以，nums 从 [<em><strong>4</strong></em>,1,<em><strong>2</strong></em>,3] 变为 [<em><strong>2</strong></em>,3,<em><strong>4</strong></em>,1] 。
因此，重排之后形成的数组是 [2,3,4,1] 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [2,1]
<strong>输出：</strong>[2,1]
<strong>解释：</strong>
由于只有一个奇数下标和一个偶数下标，所以不会发生重排。
形成的结果数组是 [2,1] ，和初始数组一样。 
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>

<!-- description:end -->
{{% /details %}}
{{% /hint %}}


