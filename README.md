
# Auto-Tester

Script to find testcases where your code is failing

## How to use(UBUNTU)

This script requires 4 parameters.

- `-g` : **Generator code** : Code which generates random testcases.

- `-c`: **Correct code.** : Brute force code which will always give correct results but has bad complexity.

- `-w`: **Wrong code** - Code with better complexity but is giving wrong answers.

- `-t`: **Number of test cases(optional)** : Enter how many testcases you want to genrate where your correct code and wrong code gives different results. It is equal to 1 by default.

Please check the screenshot attached at the bottom for better clarity.

### Languages supported

Currently these languages are supported: `C`, `C++`, `Java` and `Python`. You can use any combinations of these for your three code files(generator, correct and wrong).

## Output
Output contains 3*n number of files where n is the number of testcases given in fourth parameter. Output file format will be as follows.

input0, input1, input2, ...

correct0, correct1, correct2, ...

wrong0, wrong1, wrong2, ...

## Screenshot

![example screenshot](https://drive.google.com/uc?export=view&id=1G9l1hdyAKgjSjMu5Y5W5DaGAUieV26Fs)