
# Monty ByteCode Intepreter 🐊

![holberton image](https://ml.globenewswire.com/Resource/Download/d138c375-4652-4de1-9ca2-0079e2686576)
![Filo image](https://i.ytimg.com/vi/-0uPE_1g20U/hqdefault.jpg)

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Files of this repository

| File      | Description                |
| :-------- | :------------------------- |
|  `main.c`           | It contains the entry point of the program, where the execution begins.|
|  `lists.h`          | It is a header file that contains all the c libraries needed for the program, the description and prototypes of all the functions, structures, builtins, printing functions, and helpers. |
|  `monty.h`           | It save the parts to be analyzed later.|
|  `fun1.c`     | It tries to execute the string as a command. |
|  `new_defuncions.c`  | It contains the code for the environment and exit function components that are included in the program. |
|  `defuncion.c`       | It contains the code of the builtins included in the program. |
|  `man_1_simple_shell`| It is the manual for using the shell. Contains a description, ways for invocation, and some examples of builtins and executables that can be used inside the command line interpreter. |
|  `AUTHORS`           | It contains the authors of the project |

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
