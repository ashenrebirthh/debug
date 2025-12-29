# Debug Library

C library for colored console output with error, info, and warning messages. 
This library is intended to be used as a lightweight logging helper in C projects.

## Features
- Color-coded logging: RED (error), GREEN (info), YELLOW (warning)
- ANSI escape sequences for cross-platform terminals
- Single header implementation

## Usage
```c
#include "debug.h"

int main() {
    sh_error("Something went wrong");
    sh_info("Operation successful");
    sh_warning("Proceed with caution");
    return 0;
}
```

## Demo Output
```
ERROR: Something went wrong
INFO: Operation successful
WARNING: Proceed with caution
```

## Build
```bash
gcc main.c debug.c -o debug_demo
./debug_demo
```
