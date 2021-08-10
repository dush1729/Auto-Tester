# Generate prime numbers from range l to r

For the given problem above, we have wriiten code in [wrong.cpp](https://github.com/dush1729/Auto-Tester/blob/master/sample/wrong.cpp) for finding all prime numbers from range l to r having complexity `O(sqrt(n))`. Yet for some testcase it gives wrong answer. Let's try to find that case.

## Correct code

In [correct.cpp](https://github.com/dush1729/Auto-Tester/blob/master/sample/correct.cpp), we write the brute force way of checking primality which is of complexity `O(n)` but it is for sure correct.

## Generator code

In [generator.cpp](https://github.com/dush1729/Auto-Tester/blob/master/sample/generator.cpp), we write code generating random testcases for the given problem above that is random values for `l and r`.

## Run `test.py` code to get testcases

After we run [test.py](https://github.com/dush1729/Auto-Tester/blob/master/test.py), we will see the testcase for which our incorrect code fails and it will be for `l = 1, r = 3`.
