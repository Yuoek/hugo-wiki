---
title: "day 7"
date: 2025-11-05T10:08:13+08:00
categories: ""
tags: ""
series: ""
series_order: ""
type: ""
---

{{< katex />}}


## 第 7 天

### 牛客 | [小苯的数字排序](https://ac.nowcoder.com/acm/problem/297830)

{{% hint info %}}
{{% details "题目" %}}

# 小苯的数字排序 (NC297830)

**题号**: NC297830

**时间限制**: C/C++/Rust/Pascal 1秒，其他语言2秒

**空间限制**: C/C++/Rust/Pascal 1024 M，其他语言2048 M


## 题目描述

$\hspace{15pt}$ 小苯有 $n$ 个数字 $a_1, a_2, \dots, a_n$ ，他希望将这些数字按照以下规则排序：

$\hspace{20pt}_\texttt{1.}$ 所有偶数排在所有奇数前面；

${\hspace{20pt}}_\texttt{2.}$ 在规则 1 的基础上，偶数与偶数之间、奇数与奇数之间，都按照数值从小到大的顺序排列。

$\hspace{15pt}$ 请你帮他排出一个合理的顺序吧。

## 输入描述

$\hspace{15pt}$ 每个测试文件均包含多组测试数据。第一行输入一个整数 $T\left(1\leqq T\leqq 10^5\right)$ 代表数据组数，每组测试数据描述如下： 

$\hspace{15pt}$ 第一行一个正整数 $n\left(1 \leqq n \leqq 2 \times 10^5\right)$ 表示数字的个数。 

$\hspace{15pt}$ 第二行 $n$ 个正整数 $a_1, a_2, \dots, a_n\left(1 \leqq a_i \leqq 10^9\right)$ ，表示小苯的 $n$ 个数字。 

$\hspace{15pt}$ 除此之外，保证单个测试文件的 $n$ 之和不超过 $2 \times 10^5$ 。

## 输出描述

$\hspace{15pt}$ 对于每一组测试数据，新起一行输出 $n$ 个数字，表示按小苯的要求排好序的结果。

## 示例

### 示例 1

**输入:**
```
2
5
1 2 3 4 6
3
1 1 2
```

**输出:**
```
2 4 6 1 3
2 1 1
```

## 说明

对于第一组测试数据，偶数集合为 $\{2, 4, 6\}$ ，奇数集合为 $\{1, 3\}$ 。
偶数内部升序排列为 $\{2, 4, 6\}$ ，奇数内部升序排列为 $\{1, 3\}$ 。根据规则，偶数在前，奇数在后，拼接得到最终结果： $\{2, 4, 6, 1, 3\}$ 。

{{% /details %}}
{{% /hint %}}



### 洛谷 | [成绩排序](https://www.luogu.com.cn/problem/B2159)


{{% hint info %}}
{{% details "题目" %}}
# B2159 成绩排序

## 题目描述

给出班里某门课程的成绩单，请你按成绩从高到低对成绩单排序输出，如果有相同分数则名字字典序小的在前。

## 输入格式

第一行为 $n (0 < n < 20)$，表示班里的学生数目；

接下来的 $n$ 行，每行为每个学生的名字和他的成绩, 中间用单个空格隔开。名字只包含字母且长度不超过 $20$，成绩为一个不大于 $100$ 的非负整数。

## 输出格式

把成绩单按分数从高到低的顺序进行排序并输出，每行包含名字和分数两项，之间有一个空格。

## 输入输出样例 #1

### 输入 #1

```
4
Kitty 80
Hanmeimei 90
Joey 92
Tim 28
```

### 输出 #1

```
Joey 92
Hanmeimei 90 
Kitty 80
Tim 28
```
{{% /details %}}
{{% /hint %}}



### 力扣 | [回文数](https://leetcode.cn/problems/palindrome-number/description/)


{{% hint info %}}
{{% details "题目" %}}
## 题目描述

<!-- description:start -->

<p>给你一个整数 <code>x</code> ，如果 <code>x</code> 是一个回文整数，返回 <code>true</code> ；否则，返回 <code>false</code> 。</p>

<p><span data-keyword="palindrome-integer">回文数</span>是指正序（从左向右）和倒序（从右向左）读都是一样的整数。</p>

<ul>
	<li>例如，<code>121</code> 是回文，而 <code>123</code> 不是。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>x = 121
<strong>输出：</strong>true
</pre>

<p><strong>示例&nbsp;2：</strong></p>

<pre>
<strong>输入：</strong>x = -121
<strong>输出：</strong>false
<strong>解释：</strong>从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>x = 10
<strong>输出：</strong>false
<strong>解释：</strong>从右向左读, 为 01 。因此它不是一个回文数。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>-2<sup>31</sup>&nbsp;&lt;= x &lt;= 2<sup>31</sup>&nbsp;- 1</code></li>
</ul>

<p>&nbsp;</p>

<p><strong>进阶：</strong>你能不将整数转为字符串来解决这个问题吗？</p>

<!-- description:end -->
{{% /details %}}
{{% /hint %}}

