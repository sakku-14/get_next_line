# get_next_line

## Features
This project is to create function about get_next_line.
You can read each line till '\n'(newline) or EOF in any file chosen file descriptors. When you need to read format file, this program work well. After read each line till '\n', this returns 1. When read till EOF, this returns 0.

## Requirement
- gcc compiler

## Usage
Clone this repository:
```shell
git clone https://github.com/sakku-14/get_next_line
```

You can use this function in any c-lang programing.

## Note

| function name | get_next_line |
| ---- | ---- |
| Prototype | int get_next_line(int fd, char \*\*line); |
| Parameters | #1. file descriptor for reading<br>#2. The value of what has been read |
| Return value | 1 : A line has been read<br>0 : EOF has been reached<br>-1 : An error happened |
| External functs | read, malloc, free |
| Description | Write a function which returns a line read from a file descriptor, without the newline. |

## Author
- Yuki Sakuma
