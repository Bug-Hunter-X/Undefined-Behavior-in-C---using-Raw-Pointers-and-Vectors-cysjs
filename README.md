# Undefined Behavior with Raw Pointers and Vectors in C++

This repository demonstrates a common yet dangerous error in C++: accessing a std::vector beyond its bounds using a raw pointer.  This leads to undefined behavior, resulting in crashes, data corruption, or seemingly random results.

The `bug.cpp` file shows the problematic code.  The solution, in `bugSolution.cpp`, highlights safer alternatives to avoid this issue.  Understanding this is crucial for writing robust and secure C++ applications.