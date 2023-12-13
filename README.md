# LeetCode C++ Solutions with Unit Tests

This repository contains my solutions to various problems on [LeetCode](https://leetcode.com/), exclusively implemented in C++. Each problem is solved using C++, and the solutions are organized by the problem's ID. Additionally, unit tests are provided to validate the correctness of the implementations.

## Table of Contents

- [Introduction](#introduction)
- [Directory Structure](#directory-structure)
- [How to Use](#how-to-use)
- [Unit Tests](#unit-tests)

## Introduction

LeetCode is a platform for honing coding skills through the use of real coding interviews. This repository serves as a record of my solutions to LeetCode problems, providing a resource for others to learn from and discuss different C++ approaches.

## Directory Structure

The solutions are organized by problem ID. Each problem directory contains the following:

- **C++ Solution Files**: Code files with solutions implemented in C++.
- **Google Test Files**: Files containing unit tests using Google Test to validate the correctness of the C++ solutions.
- **README.md**: Explanation of the problem, approach, C++ code, and usage of Google Test.

## How to Use

1. Navigate to the specific problem directory you are interested in.
2. Review the problem description and constraints in the README.md file.
3. Explore the C++ solution file for the problem.
4. Run the associated Google Test files to ensure the correctness of the implementation.

## Unit Tests

Unit tests are written using [Google Test](https://github.com/google/googletest). To run the unit tests, follow these steps:

1. Install Google Test (if not already installed).
2. Compile and run the unit test files for the specific problem.

Example using [50. Pow(x, n)](https://github.com/mrdamos69/MyLeetCode/tree/main/50.%20Pow(x%2C%20n)):

    ```bash
    g++ unit_test.cc main.cc -std=c++17 -Wall -Wextra -Werror -lgtest -o tests.o
    ./tests.o

Or

    ```bash
    make test
