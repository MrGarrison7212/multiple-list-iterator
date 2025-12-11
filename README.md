# Multiple List Iterator (C++)

This small C++ program implements an iterator over three sorted integer lists and prints all elements in ascending order **without** explicitly building a merged list.

The program:
- Takes three sorted `std::vector<int>` lists (defined in `main.cpp`),
- Uses the `MultipleListIterator` class to iterate over them as one merged ascending sequence,
- Prints the result to standard output.

Example output:
```text
List - ascending: 1 2 7 8 10 12 13 14 15 16 35 42 63
```

Build and run

Requires a C++17-compatible compiler (e.g. g++).

```
g++ -std=c++17 -Ih src/main.cpp src/MultipleListIterator.cpp -o app

.\app.exe
```

