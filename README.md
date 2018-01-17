# Auto-Tester

Script to find testcases where your code is failing

## How to use(UBUNTU)

1. Changing permissions

chmod +x auto_test.sh

2. Running script

This script requires 4 parameters.

i. Generator code. Code which generates random testcases.

ii. Correct code. This brute force code which will always give correct results.

iii. Wrong code. This is code with better complexity but is giving wrong answers.

iv. Number of test cases. Enter how many testcases you want to genrate where your correct code and wrong code gives different results.

## Output
Output contains 3*n number of files where n is the number of testcases given in fourth parameter. Ourput file format will be as follows.

input_i

output_i_correct

output_i_wrong

where i is the testcase number starting from 0.

## Screenshot

![alt text](https://i.imgur.com/vBbVocW.png)
