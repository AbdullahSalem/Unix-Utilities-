# Unix Utilities in C

## Description

This repository contains C implementations of several basic Unix command-line utilities using system calls.

Implemented utilities:

- *echo* – Prints command-line arguments to standard output.
- *cp* – Copies the contents of one file to another.
- *mv* – Moves or renames files. If renaming is not possible, it copies the file and removes the original.
- *pwd* – Prints the current working directory.

The implementation mainly uses Unix system calls such as:

- `read()`
- `write()`
- `open()`
- `close()`
- `getcwd()`
- `rename()`
- `unlink()`


## Compilation

Compile each utility separately.

### echo

```bash
gcc echo.c -o echo
```

### cp

```bash
gcc cp.c -o cp
```

### mv

```bash
gcc mv.c -o mv
```

### pwd

```bash
gcc pwd.c -o pwd
```

---

## Usage

### echo

```bash
./echo Hello World
```

Output

```
Hello World
```

---

### cp

Create a source file.

```bash
echo "Sample text" > source.txt
```

Copy the file.

```bash
./cp source.txt destination.txt
```

Verify the copy.

```bash
cat destination.txt
```

Output

```
Sample text
```

---

### mv

Rename a file.

```bash
./mv old.txt new.txt
```

Verify.

```bash
ls
```

Output

```
new.txt
```

---

### pwd

```bash
./pwd
```

Example output

```
/home/user/project
```

---

## Notes

- The programs perform argument validation and print error messages for invalid input.
- File operations are implemented using low-level Unix system calls instead of standard C I/O functions where appropriate.
- The project is intended as a simple educational implementation of common Unix utilities.
