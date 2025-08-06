# 📊 Sorting Algorithms - Holberton School Project

[![C](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Holberton](https://img.shields.io/badge/school-Holberton-red.svg)](https://www.holbertonschool.com/)

## 👥 Authors
- **Aurélie** - [GitHub Profile](https://github.com/adi-mart)
- **Jordann** - [GitHub Profile](https://github.com/JordannM83)

## 📖 Description

This project is part of the Holberton School curriculum and focuses on implementing various sorting algorithms in C. The goal is to understand different sorting techniques, their time complexities, and when to use each algorithm.

## 🎯 Learning Objectives

After completing this project, you should be able to:
- Implement at least four different sorting algorithms
- Understand the difference between stable and unstable sorting algorithms
- Evaluate time complexity (Big O notation) for sorting algorithms
- Select the best sorting algorithm for a given input
- Understand what makes a sorting algorithm stable

## 📋 Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 20.04 LTS using `gcc`
- Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- Code must follow the Betty style
- No global variables allowed
- Maximum of 5 functions per file
- Standard library usage is forbidden unless specified
- Prototypes must be included in `sort.h` header file

### Betty Style
All code must follow the [Betty style guide](https://github.com/holbertonschool/Betty/wiki).

## 🗂️ Project Structure

```
holbertonschool-sorting_algorithms/
├── sort.h                      # Header file with prototypes
├── print_array.c              # Function to print arrays
├── print_list.c               # Function to print linked lists
├── 0-bubble_sort.c            # Bubble sort implementation
├── 0-O                        # Bubble sort time complexity
├── 1-insertion_sort_list.c    # Insertion sort for linked lists
├── 1-O                        # Insertion sort time complexity
├── 2-selection_sort.c         # Selection sort implementation
├── 2-O                        # Selection sort time complexity
├── 3-quick_sort.c             # Quick sort implementation (Lomuto)
├── 3-O                        # Quick sort time complexity
└── README.md                  # This file
```

## 🔧 Algorithms Implemented

### 1. Bubble Sort (`0-bubble_sort.c`)
**Description:** Repeatedly steps through the list, compares adjacent elements and swaps them if they're in the wrong order.

**Time Complexity:**
- Best case: `O(n)` - when array is already sorted
- Average case: `O(n²)`
- Worst case: `O(n²)` - when array is reverse sorted

**Space Complexity:** `O(1)`

### 2. Insertion Sort for Linked Lists (`1-insertion_sort_list.c`)
**Description:** Builds a sorted list one element at a time by inserting each element into its proper position.

**Time Complexity:**
- Best case: `O(n)` - when list is already sorted
- Average case: `O(n²)`
- Worst case: `O(n²)` - when list is reverse sorted

**Space Complexity:** `O(1)`

### 3. Selection Sort (`2-selection_sort.c`)
**Description:** Finds the minimum element and places it at the beginning, then repeats for the remaining elements.

**Time Complexity:**
- Best case: `O(n²)`
- Average case: `O(n²)`
- Worst case: `O(n²)`

**Space Complexity:** `O(1)`

### 4. Quick Sort - Lomuto Partition (`3-quick_sort.c`)
**Description:** Divides the array into partitions around a pivot element, then recursively sorts the partitions.

**Time Complexity:**
- Best case: `O(n log n)`
- Average case: `O(n log n)`
- Worst case: `O(n²)` - when pivot is always the smallest/largest

**Space Complexity:** `O(log n)` due to recursion

## 🚀 Compilation & Usage

### Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sorting_program
```

### Example Usage

#### Bubble Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-bubble_sort.c print_array.c -o bubble
./bubble
```

#### Insertion Sort (Linked List)
```bash
gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
./insertion
```

#### Selection Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o selection
./selection
```

#### Quick Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick
./quick
```

## 📊 Performance Comparison

| Algorithm | Best Case | Average Case | Worst Case | Space | Stable |
|-----------|-----------|--------------|------------|-------|--------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | ❌ |

## 🎨 Big O Notation Files

Each algorithm includes a corresponding `-O` file containing:
1. Time complexity in the best case
2. Time complexity in the average case  
3. Time complexity in the worst case

Format example:
```
O(n)
O(n^2)
O(n^2)
```

## 🧪 Testing

The project includes main files for testing each algorithm:
- `0-main.c` - Tests bubble sort
- `1-main.c` - Tests insertion sort for linked lists
- `2-main.c` - Tests selection sort
- `3-main.c` - Tests quick sort

## 📝 Notes

- All sorting algorithms print the array/list after each swap operation
- The Quick Sort implementation uses the **Lomuto partition scheme**
- The pivot for Quick Sort is always the **last element** of the partition
- Insertion sort is implemented for **doubly linked lists**

## 🏫 About Holberton School

This project is part of the curriculum at [Holberton School](https://www.holbertonschool.com/), a project-based alternative to college for the next generation of software engineers.

## 📄 License

This project is part of the Holberton School curriculum. All rights reserved.

---

*Made by Aurélie & Jordann for Holberton School*