---
title: "day 5"
date: 2025-11-03T10:31:45+08:00
categories: ""
tags: ""
series: ""
series_order: ""
type: ""
bookCollapseSection: true
---

{{< katex />}}


## 第 5 天

### 牛客 | [简单的排序](https://ac.nowcoder.com/acm/problem/231953)

{{% hint info %}}
{{% details "题目" %}}

# 简单的排序 

题号：NC231953

时间限制：C/C++/Rust/Pascal 1秒，其他语言2秒

空间限制：C/C++/Rust/Pascal 256 M，其他语言512 M

64bit IO Format: %lld

## 题目描述

给你n个数，请你将它们正序输出。

## 输入描述

输入两行，第一行，输入一个整数n。
第二行输入n个整数。

## 输出描述

输出一行，将n个整数，正序输出。

## 示例1
### 输入
```
5
5 3 4 2 1
```

### 输出
```
1 2 3 4 5
```

## 备注

$1<=n<=1000$

$n$ 个整数的范围均在 $int$ 范围内

{{% /details %}}
{{% /hint %}}



### 洛谷 | [「EZEC-10」排列排序](https://www.luogu.com.cn/problem/P7714)


{{% hint info %}}
{{% details "题目" %}}

# P7714 「EZEC-10」排列排序

## 题目描述

给你一个长度为 $n$ 的排列 $p_1,p_2, \cdots ,p_n$。你需要把它排序。

每次可以花区间长度，即 $r-l+1$ 的代价，选择排列中的任意一段区间 $[l,r]$，并将 $[l,r]$ 从小到大排序。

现在你可以让他进行若干次这个操作，直到 $p$ 中元素的值从 $1$ 到 $n$ 按升序排序，即对于 $1$ 到 $n$ 的每一个 $i$，都有 $p_i=i$。

求问花的代价最少为多少？

## 输入格式

本题有多组询问，第一行有一个数 $T$ 表示询问组数。

对于每组询问：

第一行给出一个整数 $n$。

第二行 $n$ 个整数，由空格隔开，代表排列 $p$ 中元素的值。

## 输出格式

$T$ 行，每行一个整数表示一组询问的答案。

## 输入输出样例 #1

### 输入 #1

```
2
3
1 3 2
4
3 2 1 4
```

### 输出 #1

```
2
3
```

## 说明/提示

【样例 $1$ 说明】

对于第一组数据，可选择区间 $[2,3]$ 进行排序。

对于第二组数据，可选择区间 $[1,3]$ 进行排序。

【数据规模与约定】

对于 $20\%$ 的数据，$n\leq 4$。

对于另 $30\%$ 的数据，$\sum n\leq5000$。

对于另 $10\%$ 的数据，$p_1=n$。

对于 $100\%$ 的数据，$1\le T,\sum n\le 10^6$。

{{% /details %}}
{{% /hint %}}



### 力扣 | [数组的相对排序](https://leetcode.cn/problems/relative-sort-array/description/)


{{% hint info %}}
{{% details "题目描述" %}}
## 题目描述

<!-- description:start -->

<p>给你两个数组，<code>arr1</code> 和&nbsp;<code>arr2</code>，<code>arr2</code>&nbsp;中的元素各不相同，<code>arr2</code> 中的每个元素都出现在&nbsp;<code>arr1</code>&nbsp;中。</p>

<p>对 <code>arr1</code>&nbsp;中的元素进行排序，使 <code>arr1</code> 中项的相对顺序和&nbsp;<code>arr2</code>&nbsp;中的相对顺序相同。未在&nbsp;<code>arr2</code>&nbsp;中出现过的元素需要按照升序放在&nbsp;<code>arr1</code>&nbsp;的末尾。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
<strong>输出：</strong>[2,2,2,1,4,3,3,9,6,7,19]
</pre>

<p><strong>示例 &nbsp;2:</strong></p>

<pre>
<strong>输入：</strong>arr1 = [28,6,22,8,44,17], arr2 = [22,28,8,6]
<strong>输出：</strong>[22,28,8,6,17,44]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= arr1.length, arr2.length &lt;= 1000</code></li>
	<li><code>0 &lt;= arr1[i], arr2[i] &lt;= 1000</code></li>
	<li><code>arr2</code>&nbsp;中的元素&nbsp;<code>arr2[i]</code>&nbsp;&nbsp;<strong>各不相同</strong>&nbsp;</li>
	<li><code>arr2</code> 中的每个元素&nbsp;<code>arr2[i]</code>&nbsp;都出现在&nbsp;<code>arr1</code>&nbsp;中</li>
</ul>

<!-- description:end -->
{{% /details %}}
{{% /hint %}}
