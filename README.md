# MemLeakExamples
Using source code and [Valgrind](https://valgrind.org/info/about.html) output and to illustrate the most common memory leaks.

## Summary
This repository contains subdirectories with examples demonstrating basic memory leaks in C++. Each example is accompanied by a README file that showcases the Valgrind output after analyzing the code for memory leaks.

## Fixing and testing the code
Compile each example with the `-g` flag to include debugging. Then, you must run valgrind against your binary. Dont have valgrind installed? Directions for non-debian systems: https://valgrind.org/downloads/?src=www.discoversdk.com.

**Debian systems**
```shell
sudo apt-get install valgrind
```

### Running Valgrind on an example
Navigate to the respective directory and execute the following command:

```shell
valgrind --leak-check=full ./executable_name
```

You will be able to compare Valgrind output to the README.txt files.
