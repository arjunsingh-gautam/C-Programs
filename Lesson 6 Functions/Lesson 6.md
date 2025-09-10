# <span style="color:orange"> 🧾 **Functions in C — Complete Notes**</span>

---

### 🔹 What is a Function in C?

A **function** is a self-contained block of code that performs a specific task.
Functions allow **modular**, **reusable**, and **organized** programming.

---

### 🔹 **Types of Functions in C**

1. **Library Functions**

   - Predefined in header files (`printf()`, `scanf()`, `strcpy()`, etc.)
   - Comes with the C Standard Library.

2. **User-defined Functions**

   - Defined by the programmer to perform specific tasks.

---

### 🔹 **Based on Return Type and Arguments:**

| Type                         | Return Type       | Arguments |
| ---------------------------- | ----------------- | --------- |
| 1. No return, no arguments   | `void fun(void)`  | None      |
| 2. No return, with arguments | `void fun(int x)` | Yes       |
| 3. Return, no arguments      | `int fun(void)`   | None      |
| 4. Return, with arguments    | `int fun(int x)`  | Yes       |

---

### 🔹 **Syntax of Function in C**

```c
// 1. Function declaration (prototype)
return_type function_name(parameter_list);

// 2. Function definition
return_type function_name(parameter_list) {
    // body
    return value;  // if return_type is not void
}

// 3. Function call
function_name(arguments);
```

📌 Example:

```c
#include <stdio.h>
int add(int a, int b);  // Declaration

int main() {
    int result = add(5, 3);     // Call
    printf("%d", result);
    return 0;
}

int add(int a, int b) {         // Definition
    return a + b;
}
```

---

### 🔹 **Benefits of Using Functions in C**

✅ Code reusability
✅ Improved readability
✅ Modular and logical structure
✅ Easy to debug and test
✅ Reduces code duplication

---

### 🔹 **Advantages and Disadvantages**

**Advantages**:

- Clean, manageable code
- Reusability of logic
- Easier collaboration and team work

**Disadvantages**:

- Slight overhead due to function calls
- Harder to debug if too many small functions
- Function call uses stack space (risk of overflow in recursion)

---

### 🔹 **Features of C Functions**

- Supports **recursion**
- Functions can return values or be void
- **No function overloading** (unlike C++)
- Must declare functions before use (unless defined before)

---

### 🔹 **Memory Management — Stack Frame**

Each function call creates a **stack frame** in the call stack, which includes:

- Return address
- Function arguments
- Local variables
- Temporary data

📌 Stack grows downward (higher to lower memory)

When a function finishes:

- Stack frame is destroyed
- Control returns to caller

---

### 🔹 **Special Types of Functions in C**

1. **Recursive Function**

   - A function that calls itself.
   - Needs base condition to avoid infinite recursion.

   ```c
   int factorial(int n) {
       if (n == 0) return 1;
       return n * factorial(n - 1);
   }
   ```

2. **Inline-like Functions (Macros)**

   - Not real functions, but macros can act like inline functions:

   ```c
   #define SQUARE(x) ((x)*(x))
   ```

3. **Callback Functions**

   - Function passed as an argument (commonly used with function pointers).

4. **Variadic Functions**

   - Functions that accept variable number of arguments.

---

### 🔹 **Variadic Functions in C**

📌 Use `<stdarg.h>` header.

Example: `printf()` is a variadic function.

```c
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}

int main() {
    printf("Sum: %d\n", sum(4, 10, 20, 30, 40));
}
```

✅ Use Cases:

- Logging
- Print formatting
- Aggregations

---

### 📌 Summary Chart

| Concept     | Notes                                      |
| ----------- | ------------------------------------------ |
| Declaration | Must before calling (if not defined above) |
| Definition  | Contains the actual code                   |
| Call        | Invokes the function                       |
| Storage     | Uses **stack** for arguments & local vars  |
| Return      | Optional, depends on return type           |
| Special     | Recursive, Variadic, Callback              |

---

Here are **additional important details related to functions in C** that go beyond the basics—these are essential for mastering C programming at a deeper level:

---

## 🔍 **Advanced Details on Functions in C**

---

### 🔹 1. **Function Declaration vs Definition**

- **Declaration** (also called a prototype):

  ```c
  int sum(int a, int b);  // Tells the compiler what to expect
  ```

- **Definition**:

  ```c
  int sum(int a, int b) {
      return a + b;
  }
  ```

🧠 If you don’t declare a function before `main()` or its first use, **the compiler assumes an implicit declaration** (deprecated in modern C — leads to errors in modern compilers like GCC with `-Werror=implicit-function-declaration`).

---

### 🔹 2. **Function Calling Conventions**

- Defines **how arguments are passed**, how return values are handled, and how the call stack is managed.
- Common calling conventions: `cdecl`, `stdcall`, `fastcall`, etc. (relevant in embedded systems or when mixing languages like C and ASM).

---

### 🔹 3. **Parameter Passing:**

- **Call by Value (default)**: Copies are passed.

  ```c
  void modify(int x) { x = x + 1; } // x inside modify is a copy
  ```

- **Call by Reference** (using pointers):

  ```c
  void modify(int *x) { *x = *x + 1; } // modifies original value
  ```

---

### 🔹 4. **Function Pointers**

Allows storing a function's address in a pointer and calling it indirectly.

```c
int add(int a, int b) { return a + b; }

int main() {
    int (*func_ptr)(int, int) = &add;
    printf("Sum = %d", func_ptr(2, 3));  // Output: Sum = 5
}
```

✅ Enables:

- Callbacks
- Dynamic function execution
- Array of function pointers (e.g., in state machines)

---

### 🔹 5. **Inline Functions (C99 and later)**

Used to suggest the compiler to insert the function code inline to reduce overhead.

```c
inline int square(int x) { return x * x; }
```

> ⚠️ Only a **hint** to the compiler; not guaranteed.

---

### 🔹 6. **Static Functions**

Declared with `static` to restrict their scope to the current translation unit (file).

```c
static void helper() {
    // Only accessible in this file
}
```

✅ Used for encapsulation and preventing naming conflicts in multi-file projects.

---

### 🔹 7. **Nested Functions (GNU Extension Only)**

GCC allows functions inside functions (not standard C).

```c
void outer() {
    void inner() { printf("Inner\n"); }
    inner();
}
```

⚠️ Not portable. Avoid in production.

---

### 🔹 8. **Returning Multiple Values from a Function**

C does not support returning multiple values **directly**, but you can:

- Use pointers to update multiple values
- Use a `struct` to group values

```c
struct Pair { int x, y; };

struct Pair getXY() {
    struct Pair p = {1, 2};
    return p;
}
```

---

### 🔹 9. **Recursion and Tail Recursion**

- Recursive calls push a new stack frame.
- **Tail recursion** (last operation is recursive call) can be optimized by compiler (**not guaranteed in C**).

---

### 🔹 10. **Default Arguments**

🚫 **Not supported in C** (available in C++). You must provide all arguments explicitly.

---

### 🔹 11. **Inline Assembly in Functions**

For performance or hardware-specific tasks, you can insert assembly in C functions (GCC syntax):

```c
void delay() {
    __asm__("nop");
}
```

---

### 🔹 12. **Attributes in Functions (GCC Extensions)**

```c
__attribute__((noreturn)) void exitApp();
__attribute__((always_inline)) inline int fastFunc();
```

Used to:

- Force inlining
- Optimize for tail-calls
- Specify purity or effects

---

### 🔹 13. **Main() as a Function**

Yes, `main()` is a function too!

```c
int main(void);           // No arguments
int main(int argc, char *argv[]);  // With command-line arguments
```

✅ You can use `argc` and `argv` to get command-line input.

---

### 🔹 14. **Inline Macro vs Function**

```c
#define SQUARE(x) ((x)*(x))   // Macro
inline int square(int x) { return x * x; } // Function
```

✅ Use function if you want type safety
⚠️ Macro doesn't evaluate safely: `SQUARE(x + 1)` → unexpected result

---

## 📚 Extra Knowledge:

### 🔸 Header Files and Function Sharing

If you want to use a function in multiple `.c` files:

- Put function **declarations** in `.h` file
- Keep **definitions** in one `.c` file

---

## 🧠 TL;DR:

| Feature               | C Support                    | Note                             |
| --------------------- | ---------------------------- | -------------------------------- |
| Function Overloading  | ❌ No                        | Use different names              |
| Default Arguments     | ❌ No                        | Use wrappers instead             |
| Recursion             | ✅ Yes                       | With base case to avoid overflow |
| Named Parameters      | ❌ No                        | Use `struct` for clarity         |
| Lambda/Anonymous Func | ❌ No (C11+ uses workaround) | Use function pointers            |
| Closures              | ❌ No                        | Possible with structs + pointers |

---
