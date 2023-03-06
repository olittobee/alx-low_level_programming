## 0x07. C - Even more pointers, arrays and strings ##

- [Pointers and arrays](https://intranet.alxswe.com/concepts/60)

# Resources #

- [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
- [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
- [Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
- [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)

# General #

- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

## Tasks ##

0. memset
1. memcpy
2. strchr
3. strspn
4. strpbrk
5. strstr
6. Chess is mental torture
7. The line of life is a ragged diagonal between duty and desire

## A pointer is a variable which contains a memory address. ##

### Types and memory ###

Every time you declare a variable, the computer will reserve memory for this variable. The memory reserved will then store the value of the variable.
Depending on the type of the variable, the computer will reserve more or less memory. The size of each type is generally defined in bytes (1 byte = 8 bits, each bit being 0 or 1). The sizes of the types also depend on the computer you are using. Here are the sizes of the most common types on most 64-bit Linux machines:

- char -> 1 byte
- int ->  4 bytes
- float ->4 bytes
