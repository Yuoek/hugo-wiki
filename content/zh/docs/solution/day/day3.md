---
title: "day 3"
date: 2025-11-01T13:52:39+08:00
categories: ""
tags: ""
series: ""
series_order: ""
type: ""
---


{{< katex />}}

## 第 3 天

### 牛客 | [模板：差分](https://ac.nowcoder.com/acm/problem/226303)

{{% hint info %}}
{{% details "题目" %}}

# 模板：差分 

题号：NC226303

时间限制：C/C++/Rust/Pascal 1秒，其他语言2秒

空间限制：C/C++/Rust/Pascal 256 M，其他语言512 M
64bit IO Format: %lld

## 题目描述
对于给定的长度为 $n$ 的数组 $\{a_1, a_2, \dots, a_n\}$，我们有 $m$ 次修改操作。每一次操作给出三个参数 $l, r, k$，代表将数组中的 $a_l, a_{l+1}, \dots, a_r$ 都加上 $k$。请直接输出全部操作完成后的数组。

## 输入描述
1. 第一行输入两个整数 $n, m$（$1 \leq n, m \leq 10^5$），代表数组中的元素数量、操作次数。
2. 第二行输入 $n$ 个整数 $a_1, a_2, \dots, a_n$（$-10^9 \leq a_i \leq 10^9$），代表初始数组。
3. 此后 $m$ 行，每行输入三个整数 $l, r, k$（$1 \leq l \leq r \leq n$；$-10^9 \leq k \leq 10^9$），代表一次操作。

## 输出描述
在一行上输出 $n$ 个整数，代表全部操作完成后的数组。

## 示例1
### 输入
```
3 2
1 2 3
1 2 4
3 3 -2
```

### 输出
```
5 6 1
```

## 备注
在几乎全部的情况下，PyPy 的运行速度优于 Python，我们建议您选择对应版本的 PyPy 进行提交，而不是 Python。

{{% /details %}}
{{% /hint %}}



### 洛谷 | [欢乐的跳](https://www.luogu.com.cn/problem/P1152)


{{% hint info %}}
{{% details "题目" %}}

# P1152 欢乐的跳

## 题目描述

一个 $n$ 个元素的整数数组，如果数组两个连续元素之间差的绝对值包括了 $[1,n-1]$ 之间的所有整数，则称之符合“欢乐的跳”，如数组 $\{1,4,2,3\}$ 符合“欢乐的跳”，因为差的绝对值分别为：$3,2,1$。

给定一个数组，你的任务是判断该数组是否符合“欢乐的跳”。

## 输入格式

每组测试数据第一行以一个整数 $n(1 \le n \le 1000)$ 开始，接下来 $n$ 个空格隔开的在 $[-10^8,10^8]$ 之间的整数。

## 输出格式

对于每组测试数据，输出一行若该数组符合“欢乐的跳”则输出 `Jolly`，否则输出 `Not jolly`。

## 输入输出样例 #1

### 输入 #1

```
4 1 4 2 3
```

### 输出 #1

```
Jolly
```

## 输入输出样例 #2

### 输入 #2

```
5 1 4 2 -1 6
```

### 输出 #2

```
Not jolly
```

## 说明/提示

$1 \le n \le 1000$

{{% /details %}}
{{% /hint %}}

### 力扣 | [分糖果](https://leetcode.cn/problems/distribute-candies/description/)

{{% hint info %}}
{{% details "题目" %}}
## 题目描述

<!-- description:start -->

<p>Alice 有 <code>n</code> 枚糖，其中第 <code>i</code> 枚糖的类型为 <code>candyType[i]</code> 。Alice 注意到她的体重正在增长，所以前去拜访了一位医生。</p>

<p>医生建议 Alice 要少摄入糖分，只吃掉她所有糖的 <code>n / 2</code> 即可（<code>n</code> 是一个偶数）。Alice 非常喜欢这些糖，她想要在遵循医生建议的情况下，尽可能吃到最多不同种类的糖。</p>

<p>给你一个长度为 <code>n</code> 的整数数组 <code>candyType</code> ，返回： Alice <em>在仅吃掉 <code>n / 2</code> 枚糖的情况下，可以吃到糖的 <strong>最多</strong> 种类数</em>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>candyType = [1,1,2,2,3,3]
<strong>输出：</strong>3
<strong>解释：</strong>Alice 只能吃 6 / 2 = 3 枚糖，由于只有 3 种糖，她可以每种吃一枚。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>candyType = [1,1,2,3]
<strong>输出：</strong>2
<strong>解释：</strong>Alice 只能吃 4 / 2 = 2 枚糖，不管她选择吃的种类是 [1,2]、[1,3] 还是 [2,3]，她只能吃到两种不同类的糖。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>candyType = [6,6,6,6]
<strong>输出：</strong>1
<strong>解释：</strong>Alice 只能吃 4 / 2 = 2 枚糖，尽管她能吃 2 枚，但只能吃到 1 种糖。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == candyType.length</code></li>
	<li><code>2 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>n</code> 是一个偶数</li>
	<li><code>-10<sup>5</sup> &lt;= candyType[i] &lt;= 10<sup>5</sup></code></li>
</ul>

<!-- description:end -->
{{% /details %}}
{{% /hint %}}
