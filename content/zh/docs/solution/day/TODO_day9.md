---
title: "day 9"
date: 2025-11-05T15:22:16+08:00
categories: ""
tags: ""
series: ""
series_order: ""
type: ""
draft: true
---

{{< katex />}}




## 第 9 天

### 牛客 | [字符串排序1](https://ac.nowcoder.com/acm/problem/52254)

{{% hint info %}}
{{% details "题目" %}}

# 字符串排序(1) (NC52254)

**题号**: NC52254

**时间限制**: C/C++/Rust/Pascal 1秒，其他语言2秒

**空间限制**: C/C++/Rust/Pascal 256 M，其他语言512 M

## 题目描述

对输入的字符串进行排序后输出 打开以下链接可以查看正确的代码 

```
https://ac.nowcoder.com/acm/contest/5657#question
```

## 输入描述

输入有两行，第一行n第二行是n个字符串，字符串之间用空格隔开

## 输出描述

输出一行排序后的字符串，空格隔开，无结尾空格

## 示例

### 示例 1

**输入:**
```
5
c d a bb e
```

**输出:**
```
a bb c d e
```

{{% /details %}}
{{% /hint %}}



### 洛谷 | [模板-后缀排序](https://www.luogu.com.cn/problem/P3809)


{{% hint info %}}
{{% details "题目" %}}
# P3809 【模板】后缀排序

## 题目背景

这是一道模板题。

## 题目描述

读入一个长度为 $ n $ 的由大小写英文字母或数字组成的字符串，请把这个字符串的所有非空后缀按字典序（用 ASCII 数值比较）从小到大排序，然后按顺序输出后缀的第一个字符在原串中的位置。位置编号为 $ 1 $ 到 $ n $。

## 输入格式

一行一个长度为 $ n $ 的仅包含大小写英文字母或数字的字符串。

## 输出格式

一行，共 $n$ 个整数，表示答案。

## 输入输出样例 #1

### 输入 #1

```
ababa
```

### 输出 #1

```
5 3 1 4 2
```

## 说明/提示

$1\le n \le 10^6$。

{{% /details %}}
{{% /hint %}}




### 力扣 | [按照频率将数组升序排序](https://leetcode.cn/problems/sort-array-by-increasing-frequency/description/)


{{% hint info %}}
{{% details "题目" %}}
## 题目描述

<!-- description:start -->

<p>给你一个整数数组 <code>nums</code> ，请你将数组按照每个值的频率 <strong>升序</strong> 排序。如果有多个值的频率相同，请你按照数值本身将它们 <strong>降序</strong> 排序。 </p>

<p>请你返回排序后的数组。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums = [1,1,2,2,2,3]
<b>输出：</b>[3,1,1,2,2,2]
<b>解释：</b>'3' 频率为 1，'1' 频率为 2，'2' 频率为 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums = [2,3,1,3,2]
<b>输出：</b>[1,3,3,2,2]
<b>解释：</b>'2' 和 '3' 频率都为 2 ，所以它们之间按照数值本身降序排序。
</pre>

<p><strong>示例 3：</strong></p>

<pre><b>输入：</b>nums = [-1,1,-6,4,5,-6,1,4,1]
<b>输出：</b>[5,-1,4,4,-6,-6,1,1,1]</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>-100 &lt;= nums[i] &lt;= 100</code></li>
</ul>

<!-- description:end -->
{{% /details %}}
{{% /hint %}}

