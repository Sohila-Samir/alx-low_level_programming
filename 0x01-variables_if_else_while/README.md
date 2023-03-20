# About
- this folder have `c` files to practise on loops, if statments and variables using `c`.

## Contents
- [0-positive_or_negative.c](./0-positive_or_negative.c)
- [1-last_digit.c](./1-last_digit.c)
- [2-print_alphabet.c](./2-print_alphabet.c)
- [3-print_alphabets.c](./3-print_alphabets.c)
- [4-print_alphabt.c](./4-print_alphabt.c)
- [5-print_numbers.c](./5-print_numbers.c)
- [6-print_numberz.c](./6-print_numberz.c)
- [7-print_tebahpla.c](./7-print_tebahpla.c)
- [8-print_base16.c](./8-print_base16.c)
- [9-print_comb.c](./9-print_comb.c)
- [100-print_comb3.c](./100-print_comb3.c)
- [101-print_comb4.c](./101-print_comb4.c)
- [102-print_comb5.c](./102-print_comb5.c)
- [run.sh](./runc.sh)

## Files Descriptions
- 0-positive_or_negative.c: detect wheather a random number is positive or negative and print the result.

- 1-last_digit.c: get the last digit from a random number and print it.

- 2-print_alphabet.c: prints the alphabet in lowercase

- 3-print_alphabets.c: prints the alphabet in lowercase and uppercase respectivaly.

- 4-print_alphabt.c: prints the alphabet in lowercase except 'q' and 'e' charachters.

- 5-print_numbers.c: prints the numbers from `0` to `9`.

- 6-print_numberz.c: prints the number from `0` to `9` with `putchar()` only allowed as a function.

- 7-print_tebahpla.c: prints the alphabet in reverse order with `putchar()` only allowed as a function.

- 8-print_base16.c: prints all the numbers of base16 in lowercase with `putchar()` only allowed as a function.

- 9-print_comb.c: prints numbers from `0` to `9` seprated by `, ` with `putchar()` only allowed as a function.

- 100-print_comb3.c: prints all different combinations from `0` to `99` seprated by `, `
    > - `01` and `10` are considered the same combination for `1` and `0`.
    > - favor small numbers combinations over the bigger ones. (i.e `01` instead of `10`)
    > - only `putchar()` is allowed as a function.
    > - not allowed to use any variable of type `char` either.
    > - all numbers should printed in `xx` form. (i.e `01`)

- 101-print_comb4.c: prints all different combinations from `0` to `999` seprated by `, `
    > - `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`.
    > - favor small combinations over the bigger ones. (i.e `012` instead of `210`)
    > - only `putchar()` is allowed as a function.
    > - not allowed to use any variable of type `char` either.
    > - all numbers should printed in `xxx` form. (i.e `217`)

- 102-print_comb5.c: prints all possible combinations of two two-digit numbers. seprated by `, `.
    > - `00 01`, `01 00`  are considered the same combination of the three digits `0`, `1`.
    > - only `putchar()` is allowed as a function.
    > - not allowed to use any variable of type `char` either.
    > - all numbers should printed in `xx xx` form. (i.e `01 00`, `12 13`)
    > - the second combination must start from the first combination number and so on. (for i.e `12 99` then `13 14`);

- runc.sh: a `bash` script that combiles a `c` file then executes it
    > **NOTE**  
    > - the script depends on a global variable named `CFILE` that stores the `c` file u want to execute.  
    > - *the script uses the default compiled name for c which is `a.out`*.