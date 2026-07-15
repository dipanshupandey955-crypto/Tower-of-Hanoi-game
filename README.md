# Tower of Hanoi Using Stack in C++

## 📌 Project Overview

This project implements the **Tower of Hanoi** problem using the **Stack** data structure in C++. The program uses three stacks to represent the three rods and recursively moves the disks from the source rod to the destination rod while following the rules of the Tower of Hanoi puzzle.

## 🎯 Objective

* Understand the concept of **Stacks** in Data Structures.
* Learn how **Recursion** works.
* Solve the Tower of Hanoi problem using C++.

## 🛠️ Technologies Used

* C++
* Visual Studio Code
* GNU G++ Compiler

## 📂 Project Structure

```
tower_of_hanoi.cpp
README.md
```

## ▶️ How to Compile and Run

### Compile

```bash
g++ tower_of_hanoi.cpp -o hanoi
```

### Run

**Windows**

```bash
.\hanoi.exe
```

**Linux/macOS**

```bash
./hanoi
```

## 💻 Sample Input

```
Enter number of disks: 3
```

## 📋 Sample Output

```
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
```

## 📖 Algorithm

1. Create three stacks representing rods A, B, and C.
2. Push all disks onto the source stack (A).
3. If there are no disks to move, return.
4. Move the top `n-1` disks from the source rod to the auxiliary rod.
5. Move the largest disk from the source rod to the destination rod.
6. Move the `n-1` disks from the auxiliary rod to the destination rod.
7. Repeat until all disks are moved.

## ⏱️ Time Complexity

* **Time:** `O(2^n)`
* **Space:** `O(n)`

## 📚 Concepts Used

* Stack (STL)
* Recursion
* Function Calls
* Data Structures and Algorithms


If you found this project helpful, feel free to ⭐ the repository.
