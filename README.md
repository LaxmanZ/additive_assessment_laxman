# 🚀 Coding Problems - C++ Implementation

This repository contains C++ solutions to a variety of common technical interview questions and algorithmic challenges.

> Note: I have referred to some online resources (mainly GeeksforGeeks and Educative.io) for logic understanding.

---

## 📄 List of Implemented Questions

### 1. ✅ String Compression and Decompression

- **Description**: Compress a string using Run Length Encoding (RLE), then optimize the result further, and implement a decompressor.
- **Example**:
  - Input: `"aabcccccaaa"`
  - Compress1: `"a2b1c5a3"`
  - Compress2: `"ab1c5a3"`
  - Decompressed: `"aabcccccaaa"`
- **Reference**: [Educative.io – RLE](https://www.educative.io/answers/string-compression-using-run-length-encoding)

---

### 2. ✅ Find Middle of Linked List (One Pass)

- **Description**: Find the middle node in a singly linked list using the two-pointer technique.
- **Logic**: Move one pointer twice as fast as the other; when fast reaches end, slow is at the middle.
- **Reference**: [GFG - Middle of linked list](https://www.geeksforgeeks.org/find-the-middle-of-a-given-linked-list/)

---

### 3. ✅ Trapping Rain Water

- **Description**: Given an elevation map, calculate how much rainwater can be trapped.
- **Example**:  
  Input: `[2, 1, 3, 0, 1, 2, 3]`  
  Output: `7 units`
- **Logic**: Use leftMax and rightMax arrays to find trapped water at each index.
- **Reference**: [GFG - Trapping Rain Water](https://www.geeksforgeeks.org/trapping-rain-water/)

---

### 4. ✅ Count Ways to Express Number as Sum of Consecutive Numbers

- **Description**: Find how many ways a number `n` can be written as a sum of consecutive natural numbers.
- **Example**:  
  Input: `15`  
  Output: `3` (1+2+3+4+5, 4+5+6, 7+8)
- **Reference**: [GFG - Sum of Consecutive Numbers](https://www.geeksforgeeks.org/ways-to-express-a-number-as-sum-of-consecutive-numbers/)

---

### 5. ✅ Largest 5-digit Prime in First 100 Digits of Pi

- **Description**: Take the first 100 digits of π and find the largest 5-digit prime number in it.
- **Logic**: Extract all 5-digit substrings, check each for primality, and return the largest.
- **Reference**: [GFG - Prime check](https://www.geeksforgeeks.org/c-program-to-check-prime-number/)

---

### 6. ✅ Rectangle Intersection Detection

- **Description**: Determine if two rectangles overlap based on their coordinates.
- **Logic**: Check if one rectangle is to the left, right, above, or below the other — if not, they overlap.
- **Reference**: [GFG - Rectangle overlap](https://www.geeksforgeeks.org/find-two-rectangles-overlap/)

---

### 7. ✅ Matrix Multiplication (n x n)

- **Description**: Multiply two square matrices entered by the user.
- **Logic**: Use three nested loops to compute the dot product for each element of the result matrix.
- **Reference**: [GFG - Matrix Multiplication](https://www.geeksforgeeks.org/c-program-multiply-two-matrices/)

---

## 🛠️ How to Run

1. Compile using a C++ compiler:
   ```bash
   g++ filename.cpp -o output
   ./output
   ```
