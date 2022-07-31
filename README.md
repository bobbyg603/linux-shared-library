# How to Build a Linux Shared Library
Harness the power of modular C++ and open-source

> This is a companion repo for the article [How to Build a Linux Shared Library](https://betterprogramming.pub/how-to-build-a-linux-shared-library-f5b574b0c08e) published by [Better Programming](https://betterprogramming.pub/) on [Medium](https://medium.com).

## Getting Started

Clone this repository

```sh
git clone https://github.com/bobbyg603/linux-shared-library
```

Build the library as a `.o` file:

```sh
gcc -c -fpic -o mars.o mars.cpp
```

Use the `.o` file to create the shared library `.so` file:

```sh
gcc -shared -o libmars.o mars.o
```

Compile the main program and link with the shared library:

```sh
gcc -L./ -Wl,-rpath=./ main.cpp -lmars
```

Run the compiled program!

```sh
bobby@V:~/Desktop/linux-shared-library$ ./a.out 
Hello Earth!
Hello Mars!
```

If you found this tutorial useful please [subscribe to @bobbyg603 on Medium](https://bobbyg603.medium.com/). Thanks!