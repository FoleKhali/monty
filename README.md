# Monty ByteCode Intepreter 🐊

![holberton image](https://ml.globenewswire.com/Resource/Download/d138c375-4652-4de1-9ca2-0079e2686576)
![Filo image](https://i.ytimg.com/vi/-0uPE_1g20U/hqdefault.jpg)

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Files of this repository

| File      | Description                |
| :-------- | :------------------------- |
|  `main.c`           | It contains the entry point of the program, where the execution begins.|
|  `monty.h`          | It is the first header file that contains all the c libraries needed for the program, the description and prototypes of all the functions, structures, builtins, printing functions, and helpers. |
|  `lists.h`           | It is the second header file, this contains others functions that are necessary for the proggram to work|
|  `fun1.c`     | Functions that help the main functions. |
|  `fun2.c`     | Functions that help the main functions. |
|  `opcode.c`  | The match file and some functions. |
|  `handler1.c`       | It contains some of the functions that we need to interpret monty. |
|  `handler2.c`| It contains some of the functions that we need to interpret monty. |
|  `handler3.c`           | It contains some of the functions that we need to interpret monty. |
|  `char.c`     | Another main functions. |
|  `free.c`     | A function to free something by choice. |
|  `strtow.c`     | Functions that help the main functions. |

## Installation


- Clone this repository: `git clone "https://github.com/FoleKhali/monty.git"`

- Change directories into the repository: `cd monty`

- Compile: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty`

## Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

```bash
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
```
Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:
```bash
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```
## Authors

- Fernando Gonzales | [GitHub](https://github.com/gpradinett)  
- Dhanna Palomino | [GitHub](https://github.com/FoleKhali)
