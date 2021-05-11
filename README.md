# get_next_line

## Features
This project is to create function, get_next_line.
When you call this function, you can read a line till '\n'(newline) or EOF in any file chosen file descriptors. When you need to read format file, this function works well. After read each line till '\n', this returns 1. When read till EOF, this returns 0.

## Requirement
- gcc compiler

## Usage
Clone this repository:
```shell
git clone https://github.com/sakku-14/get_next_line
```

If you include get_next_line.h, you can use this function in any c-lang programing.

## Note

| function name | get_next_line |
| ---- | ---- |
| Prototype | int get_next_line(int fd, char \*\*line); |
| Parameters | #1. file descriptor for reading<br>#2. The value of what has been read |
| Return value | 1 : A line has been read<br>0 : EOF has been reached<br>-1 : An error happened |
| External functs | read, malloc, free |
| Description | Write a function which returns a line read from a file descriptor, without the newline. |

Once this function called, read the size of BUFFERSIZE(defined in get_next_line.h) and put it to static variable. Then a line with '\n' or EOF is put into second argument of line. Next time you call the function, find '\n' or EOF from the static variable. If it is found, just put it to second argument. But if it is not, read the size of BUFFERSIZE again and join the text with the static variable and do the same. 

## Author
- Yuki Sakuma
