
# HW5 EE599 - Computing Principles for Electrical Engineers

- Deadline: Friday, October 30 by 23:59 pm
- Total: 120 points. 100 points is considered full credit.

**About Grading Rubrics**
- For non-coding questions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests). Do **Not** change or modify any given function headers and formats in both [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests). Unexpected changes will result in **zero** credit.
- For coding questions, there is a **black box testing** for each question. All points are only based on passing the test cases or not (i.e. we don't grade your work by your source code). So, try to do comprehensive testing before your final submission.

## Question 1 (20 Points. Easy)

Given a vector of distinct integer digits (i.e. 0 to 9), convert the vector to an **integer** value called **result** that represents the vector. The output **result** is created by concatenating the vector elements to each other and converting it to a number.

Example:\
Input: [1, 2, 3], output: 123\
Input: [0, 3, 2], output: 32\
Input: [1, 9, 9, 0], output: 1990

Write several tests using GTest for your function in [tests/q1_student_test.cc](tests/q1_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q1_student_test
```

## Question 2 (40 Points. Easy)

Given a vector of **distinct** digits (i.e. 0 to 9) and a value k, find all permutations that satisfy the following:
- If we convert the permutation to a number **result** (as in the ConvertToNumber in the previous question), then result >= k.

Example :\
input:  [1, 2, 3], k = 150 \
output:\
[\
  [2, 1, 3],\
  [2, 3, 1],\
  [3, 1, 2],\
  [3, 2, 1]\
]\
Explanation: [1, 2, 3], [1, 3, 2] are not included in the output because 123 < 150 and 132 < 150.

Please use early backtracking. 


Write several tests using GTest for your function in [tests/q2_student_test.cc](tests/q2_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q2_student_test
```

## Question 3 (20 Points. Easy)

Write a function ```int findKthSmallest(const vector<vector<int>> &input, int k)``` that finds the kth smallest element among all elements in all vectors and returns that value.
- You should do this without sorting the vector
- Provide time complexity for your function
- if k is invalid(eg: k <= 0), return -INX_MAX

Example:\
input: [ [0, 2], [1, 5], [6, 3, 15] ] and k = 2\
output: 1

input: [ [0, 2], [1, 2, 5], [6, 2, 2, 3, 15] ] and k = 7\
output: 3

Write several tests using GTest for your function in [tests/q3student_test.cc](tests/q3_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q3_student_test
```

## Question 4 (20 Points. Easy)

We learn a few sorting algorithms in lecture, and picture below shows the order of dividing and merging in MergeSort:

<p align="center"><img width="80%" src="merge_sort.png" /></p>

Please create a similar image for sorting the letters in the following string in alphabetical order:
```
ilovecoding
```
To get full credit, you need to
 - clearly specify when you are dividing and when you are merging and what two arrays are being merged. 
 - derive the overall time compexity in your answer.
You can either attach an image OR text representation of your solution.

Ans:

## Optional Questions (No Credit)

1.Find all permutations of a given list of digits (might have duplicates).

Example :\
input:  [1, 1, 3]\
output:\
[\ 
  [1, 1, 3], [1, 3, 1], [3, 1, 1]\
]

2.Given a non-empty string s and a dictionary containing a list of words,  add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences.

Example :\
Input: s = "catsanddog”,  dic = ["cat", "cats", "and", "sand", "dog"]\
Output: [   "cats and dog",   "cat sand dog" ]




