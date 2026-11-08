# CPP00

This repository contains the first C++ project from the 42 curriculum, focused on introducing core C++ basics such as classes, streams, memory, and simple program structure.

The project includes two exercises:

- ex00: a loud text converter
- ex01: a simple phonebook manager

## Project structure

```text
CPP00/
├── en.subject.pdf
├── ex00/
│   ├── Makefile
│   └── megaphone.cpp
└── ex01/
    ├── contact.cpp
    ├── contact.hpp
    ├── main.cpp
    ├── makefile
    ├── phonebook.cpp
    └── phonebook.hpp
```

## Exercise 00 - Megaphone

This program prints all provided arguments in uppercase, separated by spaces.

### Example

```bash
cd ex00
make
./megaphone "hello world"
```

Output:

```bash
HELLO WORLD
```

If no arguments are passed, it prints:

```bash
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

## Exercise 01 - Phonebook

This program simulates a phonebook that supports adding contacts and searching stored entries.

### Commands

- ADD: add a new contact
- SEARCH: display stored contacts and search for one by index
- EXIT: quit the program

### Build and run

```bash
cd ex01
make
./phonebook
```

## Notes

- The project follows the strict 42 coding style and uses C++98-compatible practices.
- The subject is included as `en.subject.pdf` for reference.

## Author

Created as part of the 42 school C++ module 00 exercises.
