# Minishell
This project is about creating a simple shell.

## Introduction
Minishell is a simple Unix shell written as part of the 42 School curriculum. It aims to replicate basic functionalities of a shell like handling commands, executing programs, and managing environment variables.

## Features
- Command execution
- Simple built-in commands (echo, cd, pwd, export, unset, env, exit)
- Environment variable handling
- Error handling

## Compilation
To compile the Minishell program, use the provided Makefile:

```bash
make
```

## Usage
After compiling, you can run the Minishell using the following command:

```bash
./minishell
```

## Supported Commands
Minishell supports the following built-in commands:

1. `echo`: Display a line of text.
2. `cd`: Change the current directory.
3. `pwd`: Print the working directory.
4. `export`: Set an environment variable.
5. `unset`: Unset an environment variable.
6. `env`: Display the environment or set an environment variable.
7. `exit`: Exit the shell.

## Example Usage
```bash
$ ./minishell
ebash echo Hello, world!
Hello, world!
ebash cd /path/to/directory
ebash pwd
/path/to/directory
ebash export MY_VARIABLE=my_value
ebash env
MY_VARIABLE=my_value
...
ebash exit
```
