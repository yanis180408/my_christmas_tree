my_christmas_tree

A small C program that prints a Christmas tree made of stacked triangles in the terminal. The size of the tree is given as a command-line argument.

Build
sh
gcc -Wall -Wextra -Werror -o my_christmas_tree my_christmas_tree.c
Usage
sh
./my_christmas_tree <size>

size must be a positive integer. If the number of arguments is wrong or the size is lower than 1, the program prints nothing and exits with status 1.

Examples

Size 1:

text
./my_christmas_tree 1
   *
  ***
 *****
*******
   |

Size 2:

text
./my_christmas_tree 2
      *
     ***
    *****
   *******
    *****
   *******
  *********
 ***********
*************
     |||
     |||
How it works

The tree is made of size stages. Stage k has k + 3 rows, and each row is two stars wider than the one above it. Each new stage starts two stars narrower than the last row of the previous stage, which gives the layered look.

Number of stars in the first row of stage k: k * k + k - 1
Number of stars in row r of stage k (starting at 0): (k * k + k - 1) + 2 * r
Width of the widest row (the last row of the last stage): M = size * size + 3 * size + 3
Leading spaces for any row: (M - stars) / 2

The trunk has size lines. Its width is size if size is odd, or size + 1 if it is even, so that it stays centered. It is indented with (M - width) / 2 spaces.
