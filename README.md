24-544067-TK-60473-Assignment03

Assignment 03 – Algorithm Analysis and Search Implementation

Student Information
Name: Zaitunisa Hartiningciyas

Student ID:[24/544067/TK/60473]

Overview
This assignment focuses on analyzing algorithm efficiency and implementing search algorithms in C++. The tasks involve evaluating time complexity, implementing a dynamic array structure, and comparing the performance of different searching techniques.

The assignment consists of three main problems:
1. Algorithm cost analysis using operation counting.
2. Implementation of a dynamic array.
3. Comparison of Linear Search and Binary Search algorithms.

Problem Descriptions
Problem 1 – Algorithm Cost Analysis

In this problem, several code snippets were analyzed to determine their **running time functions T(n)** by counting the number of primitive operations executed.

The analysis includes:

* Identifying operations such as assignments, comparisons, and arithmetic operations.
* Determining how many times loops execute.
* Expressing the total cost as a function of **n**.

The final result is represented as **T(n)** and simplified using **Big-O notation** to describe algorithm efficiency.

Problem 2 – Dynamic Array Implementation
This problem implements a simplified **Dynamic Array (DynArray)** data structure in C++.

The implementation includes the following operations:

* `pushBack(value)`
  Adds a new element at the end of the array.

* `insert(index, value)`
  Inserts an element at a specific position.

* `remove(index)`
  Removes an element from a specified index.

* `get(index)`
  Retrieves the element at a given index.

* `set(index, value)`
  Updates the value of an element at a given index.

* `print()`
  Displays the array contents along with its size and capacity.

This demonstrates basic data structure manipulation and memory management concepts.

Problem 3 – Linear Search vs Binary Search
This problem compares two searching algorithms:

Linear Search

Searches sequentially through each element in the array until the target value is found.

Time Complexity:
Best Case: O(1)
Worst Case: O(n)

Binary Search

Divides the sorted array into halves to locate the target element more efficiently.

Requirements:

* The array must be sorted

Time Complexity:

* Best Case: O(1)
* Worst Case: O(log n)

The program tests both algorithms using arrays of size:

* `n = 10`
* `n = 100`
* `n = 1000`

For each size, the program tests:

1. Searching for an existing element
2. Searching for a missing element

The results are compared to verify that both algorithms return the same index values.

Compilation Instructions
All programs were written in C++.

Compile Problem 2

```bash
clang++ problem2.cpp -o problem2
```

Run:

```bash
./problem2
```

Compile Problem 3

```bash
clang++ problem3.cpp -o problem3
```

Run:

```bash
./problem3
```

For systems using `g++`:

```bash
g++ problem2.cpp -o problem2
g++ problem3.cpp -o problem3
```


Known Issues or Limitations

* The Binary Search algorithm requires the array to be **sorted** before performing the search.
* The dynamic array implementation uses a **fixed initial capacity**, so it does not automatically resize when the capacity is exceeded.
* The program focuses on demonstrating algorithm concepts rather than full production-level data structures.



Time Spent on Assignment
Total Time: 3 days

