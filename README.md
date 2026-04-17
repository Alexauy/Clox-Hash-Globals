# Clox-Hash-Globals

This project contains a clean `clox` snapshot based on *Crafting Interpreters*
at the stage where hash tables, string interning, and global variables are in
place.

It is intended as a focused starting point for the challenge work around the
hash-table/global-variable chapters, so later features have been left out on
purpose.

Included at this stage:

- String objects
- Hash tables with tombstones and string interning
- Global variable declaration, lookup, and assignment
- Bytecode compiler and VM for expressions, `print`, and `var`

Not included yet:

- Block scope and local variables
- `if`, `while`, `for`
- Short-circuit `and` / `or`
- Functions, closures, classes, and garbage collection

Build with CMake:

```powershell
cmake -S . -B build
cmake --build build
```

Run:

```powershell
.\build\Debug\clox.exe
```

or on single-config generators:

```powershell
.\build\clox.exe
```
