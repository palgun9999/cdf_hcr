# String Split and Join

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the firstname and lastname of a person on two different lines. Your task is to read them and print the following: 

>Hello `firstname` `lastname`! You just delved into python.

**Function Description**   

Complete the *print_full_name* function in the editor below.  

*print_full_name* has the following parameters:  

- *string first:* the first name   
- *string last:* the last name  

**Prints**   

- *string:* 'Hello $firstname$ $lastname$! You just delved into python' where $firstname$ and $lastname$ are replaced with $first$ and $last$. 

**Input Format**

The first line contains the first name, and the second line contains the last name.  

**Constraints**

The length of the first and last names are each &le; $10$.

**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T11:08:10.729Z  

```py


def split_and_join(line):
    return "-".join(line.split(" "))
if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/whats-your-name/problem)