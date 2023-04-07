Bit manipulation is a programming technique that involves manipulating individual bits of data in order to achieve the desired result. In C language, bit manipulation can be used to perform a variety of operations on data at the bit level. Some common bit manipulation operations in C include:

1. Bitwise AND (&), OR (|), XOR (^) - performs the logical AND, OR, and exclusive-OR operations between two operands at the bit level.

2. Left shift (<<) and Right shift (>>) - shifts the bits of a number to the left or right (with zero fill).

3. Bitwise NOT (~) - inverts all bits of a number, i.e., one's complement.

4. Bitwise assignment operators – &=, |=, ^=, <<=, >>=.

Bit manipulation can be useful in various applications, such as memory allocation, compression, cryptography, and embedded systems. However, it requires an understanding of binary numbers and logical operators, and can be tricky to use correctly, particularly when dealing with signed integers. It is also important to ensure that the code is portable across different platforms with differing byte orders and sign representations.

## Tasks ##

* `0. 0`

  * [0-binary_to_uint.c](./0-binary_to_uint.c): C function that converts a binary number

  to an `unsigned int`.

  * The parameter `b` is a pointer to a string of `0` and `1` characters.

  * If `b` is `NULL` or there are one or more characters in `b` that are

  not `0` or `1` - returns `0`.

  * Otherwise - returns the converted number.


* `1. 1`

  * [1-print_binary.c](./1-print_binary.c): C function that prints the binary representation

  of a number.


* `2. 10`

  * [2-get_bit.c](./2-get_bit.c): C function that returns the value of a bit at a

  given index.

  * Indices start at `0`.

  * If an error occurs - returns `-1`.

  * Otherwise - returns the value of the bit at the given index.


* `3. 11`

  * [3-set_bit.c](./3-set_bit.c): C function that sets the value of a bit at a given index

  to `1`.

  * If an error occurs - returns `-1`.

  * Otherwise - returns `1`.


* `4. 100`

  * [4-clear_bit.c](./4-clear_bit.c): C function that sets the value of a bit at

  a given index to `0`.

  * If an error occurs - returns `-1`.

  * Otherwise - returns `1`.


* `5. 101`

  * [5-flip_bits.c](./5-flip_bits.c): C function that returns the number of bits needed

  to be flipped to get from one number to another.


* `6. Endianness`

  * [100-get_endianness.c](./100-get_endianness.c): C function that checks the endianness.

  * If big-endian - returns `0`.

  * If little-endian - returns `1`.


* `7. Crackme3`

  * [101-password](./101-password): File containing the password for the crackme3 executable.
