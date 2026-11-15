# Arrays & Strings

The first DSA section contains ten fundamental patterns. Each source file is a standalone C++17 program and reads its input from standard input.

| # | Problem | Key idea | Time | Space |
|---|---|---|---:|---:|
| 1 | Reverse Array | two pointers | O(n) | O(1) |
| 2 | Two Sum | hash map | O(n) | O(n) |
| 3 | Valid Palindrome | two pointers | O(n) | O(1) |
| 4 | Valid Anagram | frequency count | O(n) | O(1) |
| 5 | Longest Unique Substring | sliding window | O(n) | O(k) |
| 6 | Product Except Self | prefix and suffix products | O(n) | O(1)* |
| 7 | Maximum Subarray | Kadane's algorithm | O(n) | O(1) |
| 8 | Longest Common Prefix | character-by-character scan | O(total chars) | O(1) |
| 9 | Group Anagrams | sorted-string hash key | O(n·k log k) | O(n·k) |
| 10 | Rotate Array | reverse operations | O(n) | O(1) |

*excluding the returned output array.

Compile and run a file:

```bash
g++ -std=c++17 -Wall -Wextra arrays-and-strings/01_reverse_array.cpp -o solution
./solution
```
