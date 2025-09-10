<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Introduction to Computer</title>
    <style>
        body {
            font-family: Arial, sans-serif;
        }
        .navbar {
            overflow: hidden;
            background-color: #333;
        }
        .navbar a {
            float: left;
            display: block;
            color: #f2f2f2;
            text-align: center;
            padding: 14px 20px;
            text-decoration: none;
        }
        .navbar a:hover {
            background-color: #ddd;
            color: black;
        }
    </style>
</head>
<body>

<div class="navbar">
    <a href="#t1">History of C Languge</a>
    <a href="#t2">Version History of C Languge</a>
    <a href="#t3">Features of C Languge</a>
    <a href="#t4">Basic Code in C</a>
    <a href="#t5">Tokens </a>
    <a href="#t6">Comments</a>
    <a href="#t7">Variables</a>
    <a href="#t8">Data Types</a>
    <a href="#t9">Input/Output Instructions in C</a>
    <a href="#t10">Declaration,Definition,Initialisation</a>
    <a href="#t11">Boolean Data-Type in C</a>
    <a href="#t12">Memory Allocation of Varibale</a>
    <a href="#t13">Memory Structure</a>
</div>

# <span style="color:#33ff00">C Language</span>

![icon](data:image/png;base64,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)

## <span style="color:orange" id="t1">History of C Languge </span>

- **BCPL:** Basic Combined Programming Languge -> 1966,_Martin Richards_
- **B:** 1969 -> _Ken Thompson_
- **C:** 1972 -> _Dennis Ritchie_

## <span style="color:orange" id="t2">Version History of C Languge </span>

- Original Version (1972-1973):

Dennis Ritchie developed the original version of the C programming language at Bell Labs between 1972 and 1973.

- K&R C (1978):

- ANSI C (1983):

In 1983, the American National Standards Institute (ANSI) standardized the C language for the first time.

- C89
- C90
- C95
- C99
- C11
- C17

## <span style="color:orange" id="t3">Features of C Languge </span>

- Procedural Language:
  C is a procedural programming language, emphasizing functions or procedures that perform specific tasks.

- Structured Language:It supports structured programming with constructs like functions, loops, and conditionals for organized and modular code.

- Middle-Level Language: C is considered a middle-level language due to its combination of low-level and high-level features.

- Portable:C programs are relatively portable across different platforms, contributing to the language's versatility.

- Efficient and Fast Execution:C is known for its efficiency and fast execution, making it suitable for performance-critical applications.
- Low-Level Features:Provides features like pointers and manual memory management for low-level programming.

- High-Level Abstractions:Supports high-level abstractions such as functions and structures to enhance code organization and readability.
- Direct Access to Memory:Allows direct access to memory addresses through pointers, providing control over memory management.

- Bitwise Operations:Supports bitwise operations, enabling manipulation of individual bits in data.

- Rich Standard Library:Comes with a rich standard library providing a variety of functions for common tasks.

- Flexibility:Offers flexibility in terms of coding styles and programming paradigms.
- Extensibility:Supports the creation of libraries and modules, promoting code reuse and extensibility.
- Efficient Data Manipulation:Facilitates efficient manipulation of data structures and algorithms.
- Close to Hardware:Designed to be close to the hardware, making it suitable for system-level programming.
- Community Support:Enjoys strong community support, contributing to a wealth of resources and third-party libraries.
- Dynamically Allocatable Memory:Allows dynamic memory allocation and deallocation using functions like malloc and free.
- Recursive Functions:Supports the creation of recursive functions, allowing a function to call itself.
- Pointers and Arrays:Pointers can be used to manipulate arrays efficiently, and arrays decay into pointers.
- Powerful Preprocessor:Features a powerful preprocessor that allows macro definitions and conditional compilation.
- Multi-Paradigm Language:C supports procedural, imperative, and structured programming paradigms.
- Inline Assembly:Permits the inclusion of assembly language code within C programs for low-level operations.
- Control Structures:Offers control structures like if, else, switch, and loops (for, while, do-while).
- Dynamic Memory Allocation:Provides dynamic memory allocation using functions like malloc, calloc, realloc, and free.
- Bit Fields:Allows the creation of bit fields within structures to control the storage allocation at the bit level.
- Command-Line Arguments:Supports command-line arguments, enabling interaction with programs from the command line.
- Support for File Handling:Includes features for file input/output operations using functions like fopen, fclose, fread, and fwrite.

---

## <span style="color:orange" id="t4">Basic Code in C </span>

![Code Structure](https://media.geeksforgeeks.org/wp-content/uploads/20221219163357/Structure-of-C-Program.png "Code_Structure")

> [More Info](https://www.geeksforgeeks.org/c-language-introduction/?ref=lbp)

## <span style="color:orange" id="t5">Tokens </span>

> A token in C can be defined as the smallest individual element of the C programming language that is meaningful to the compiler.

### Types of Token in C

![Tokens](https://media.geeksforgeeks.org/wp-content/uploads/20230703154836/Tokens-in-C.png "Tokens in C")

1. **C Token – Keywords**
   > jin shabdo ka arth compiler ko pehle se pta hai

- The keywords are _pre-defined or reserved words_ in a programming language.
- Each keyword is meant to perform a specific function in a program.
- Since keywords are referred names for a compiler, they <u>can’t be used as variable names</u>

2. **C Token – Identifiers**

- Identifiers are used as the general terminology for the naming of variables, functions, and arrays.
- These are user-defined names

#### Rules for Naming Identifiers

Certain rules should be followed while naming C identifiers which are as follows:

- They must begin with a letter or underscore(\_).
- They must consist of only letters, digits, or underscore. No other special character is allowed.
- It should not be a keyword.
- It must not contain white space.
- It should be up to 31 characters long as only the first 31 characters are significant.
  > Note: Identifiers are _case-sensitive_ so names like **variable** and **Variable** will be treated as different

3. **C Token – Constants**

- A constant token represents a fixed value in a C program that does not change.
  Examples include integer constants, floating-point constants, character constants, and string literals.
- These are literals, meaning they are direct values used in code, not variables.
- Eg.:

```c
10       // Integer constant
3.14     // Floating-point constant
'A'      // Character constant
"Hello"  // String constant
```

4. **C Token – Strings**

- Strings are nothing but an array of characters ended with a null character (‘\0’).
- This null character indicates the end of the string.
- Strings are always enclosed in _double quotes_. Whereas, a character is enclosed in _single quotes_ in C and C++.

5. **C Token – Special Symbols**
   The following special symbols are used in C having some special meaning and thus, cannot be used for some other purpose. Some of these are listed below:

- **Brackets[]:** Opening and closing brackets are used as array element references. These indicate single and multidimensional subscripts.
- **Parentheses():** These special symbols are used to indicate function calls and function parameters.
- **Braces{}:** These opening and ending curly braces mark the start and end of a block of code containing more than one executable statement.
- **Comma (, ):** It is used to separate more than one statement like for separating parameters in function calls.
- **Colon(:):** It is an operator that essentially invokes something called an initialization list.
- **Semicolon(;):** It is known as a statement terminator. It indicates the end of one logical entity. That’s why each individual statement must be ended with a semicolon.
- **Asterisk (\*):** It is used to create a pointer variable and for the multiplication of variables.
  Assignment operator(=): It is used to assign values and for logical operation validation.
- **Pre-processor (#):** The preprocessor is a macro processor that is used automatically by the compiler to transform your program before actual compilation.
- **Period (.):** Used to access members of a structure or union.
- Tilde(~): Used as a destructor to free some space from memory.

6. **C Token – Operators**

- <u>Operators are symbols that trigger an action when applied to C variables and other objects.</u>
- The data items on which operators act are called operands.

Depending on the number of operands that an operator can act upon, operators can be classified as follows:

- Unary Operators: Those operators that require only a single operand to act upon are known as unary operators.For Example increment and decrement operators
- Binary Operators: Those operators that require two operands to act upon are called binary operators. Binary operators can further are classified into:

  1. Arithmetic operators
  2. Relational Operators
  3. Logical Operators
  4. Assignment Operators
  5. Bitwise Operator

- Ternary Operator: The operator that requires three operands to act upon is called the ternary operator. Conditional Operator(?) is also called the ternary operator.

## <span style="color:orange" id="t6">Comments </span>

> statements jo compiler ignore kar deta hai

- The comments in C are human-readable explanations or notes in the source code of a C program.
- A comment makes the program easier to read and understand.
- These are the statements that are not executed by the compiler or an interpreter.

#### Types of Commnents

1. Single Line Comment:
   `// This is a single line comment`
2. Mult Line Comment:
   `/* This is multi line comment */`

## <span style="color:orange" id="t7">Variables </span>

> Are **Container** which store data

- A variable in C is a memory location with some name that helps store some form of data and retrieves it when required. We can store different types of data in the variable and reuse the same variable for storing some other data any number of times.

#### Syntax

```C
data_type variable_name = value;    // defining single variable
or

data_type variable_name1, variable_name2;    // defining multiple variable

int var; // variable definition
var = 10; // initialization
or
int var = 10; // variable declaration and definition

```

- **data_type:** Type of data that a variable can store.
- **variable_name:** Name of the variable given by the user.
- **value:** value assigned to the variable by the user.

> Note: C is a strongly typed language so all the variables types must be specified before using them.

![Variable Syntax](https://media.geeksforgeeks.org/wp-content/uploads/20221202181339/Cvariables1.png "Variable Syntax")

## <span style="color:orange" id="t8">Data Types</span>

| Types                   | Description                                                                                                                               |
| ----------------------- | ----------------------------------------------------------------------------------------------------------------------------------------- |
| Primitive Data Types    | Primitive data types are the most basic data types that are used for representing simple values such as integers, float, characters, etc. |
| User Defined Data Types | The user-defined data types are defined by the user himself.                                                                              |
| Derived Types           | The data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types.                           |

![Data Types](https://media.geeksforgeeks.org/wp-content/uploads/20220808115138/DatatypesInC.jpg "Data Types")

> More on [Data_Types](https://www.geeksforgeeks.org/data-types-in-c/?ref=lbp)

## <span style="color:orange">sizeof() Operator</span>

> The C language provides the `sizeof()` operator to check the size of the data types

> Code to demonstrate `sizeof` use [code_snippet](size.c)

## <span style="color:orange" >Data-Types Size and other details</span>

| Type            | Example                          | Size (bytes) | Description             |
| --------------- | -------------------------------- | ------------ | ----------------------- |
| `int`           | `int x = 10;`                    | 2 or 4       | Stores whole numbers    |
| `short int`     | `short s = 5;`                   | 2            | Smaller integer         |
| `long int`      | `long l = 1000;`                 | 4 or 8       | Larger integer          |
| `long long int` | `long long ll = 9999;`           | 8            | Very large integer      |
| `float`         | `float f = 3.14;`                | 4            | Stores decimal numbers  |
| `double`        | `double d = 3.141592;`           | 8            | Higher precision        |
| `long double`   | `long double ld = 3.1415926535;` | 10,12,16     | Even more precision     |
| `char`          | `char c = 'A';`                  | 1            | Stores single character |
| `_Bool`         | `_Bool flag = 1;`                | 1            | Stores `0` or `1`       |
| `void`          | `void func();`                   | -            | No value                |
| `enum`          | `enum days {Mon, Tue, Wed};`     | Varies       | Named integer constants |

The **size** and **range** of data types in C depend on multiple factors, primarily:

1. **System Architecture (32-bit vs. 64-bit)**
2. **Compiler Used (GCC, MSVC, Clang, etc.)**
3. **Operating System (Windows, Linux, Mac)**
4. **Compiler-Specific Flags and Settings**

---

## **1. System Architecture (32-bit vs. 64-bit)**

The CPU architecture plays a major role in determining the size of data types.

🔹 **In a 32-bit system**:

- `int` is usually **4 bytes**
- `long` is usually **4 bytes**
- `pointer` is **4 bytes**

🔹 **In a 64-bit system**:

- `int` remains **4 bytes**, but
- `long` may become **8 bytes**
- `pointer` is **8 bytes**

**Example (Size differences on 32-bit vs. 64-bit systems using GCC)**  
| Data Type | 32-bit (GCC) | 64-bit (GCC) |
|-----------|-------------|-------------|
| `int` | 4 bytes | 4 bytes |
| `short` | 2 bytes | 2 bytes |
| `long` | 4 bytes | 8 bytes |
| `long long` | 8 bytes | 8 bytes |
| `float` | 4 bytes | 4 bytes |
| `double` | 8 bytes | 8 bytes |
| `long double` | 12/16 bytes | 16 bytes |
| `pointer` | 4 bytes | 8 bytes |

---

## **2. Compiler Used (GCC, MSVC, Clang)**

Different compilers may have different implementations for data types.

🔹 **GCC (GNU Compiler Collection)**

- Follows the **LP64 model** on **Linux/macOS 64-bit**, meaning `long` is **8 bytes**.
- On **Windows 64-bit**, follows **LLP64 model**, meaning `long` is **4 bytes**.

🔹 **MSVC (Microsoft Visual C++)**

- Uses **LLP64 model** where:
  - `int = 4 bytes`
  - `long = 4 bytes`
  - `long long = 8 bytes`

🔹 **Clang**

- Follows similar rules as GCC.

**Example (Size differences with GCC vs. MSVC on a 64-bit system)**  
| Data Type | GCC 64-bit | MSVC 64-bit |
|-----------|---------|---------|
| `int` | 4 bytes | 4 bytes |
| `long` | 8 bytes | 4 bytes |
| `long long` | 8 bytes | 8 bytes |
| `pointer` | 8 bytes | 8 bytes |

---

## **3. Operating System (Windows, Linux, macOS)**

- Linux and macOS (using **GCC or Clang**) follow **LP64** (Long = 64-bit).
- Windows (using **MSVC**) follows **LLP64** (Long = 32-bit, Long Long = 64-bit).

Example:

```c
#include <stdio.h>
int main() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    return 0;
}
```

🔹 **Output on Linux/macOS (64-bit, GCC/Clang)**

```
Size of int: 4 bytes
Size of long: 8 bytes
Size of long long: 8 bytes
```

🔹 **Output on Windows (64-bit, MSVC)**

```
Size of int: 4 bytes
Size of long: 4 bytes
Size of long long: 8 bytes
```

---

## **4. Compiler-Specific Flags & Settings**

Compilers allow modifying the size of data types using **flags**.

For example, in GCC:

- **`-m32`** compiles the program for a **32-bit** architecture, changing data sizes.
- **`-m64`** compiles for **64-bit**.

```sh
gcc -m32 program.c -o program   # Compile for 32-bit
gcc -m64 program.c -o program   # Compile for 64-bit
```

Using `-m32`, `long` will be **4 bytes**, but using `-m64`, `long` will be **8 bytes**.

---

## **5. Memory Alignment & Padding**

- CPUs access memory efficiently when data types are **aligned** properly.
- The compiler may add **padding bytes** to align data in memory.
- **Example (struct with padding):**
  ```c
  struct example {
      char c;   // 1 byte
      int i;    // 4 bytes
  };
  ```
  The total size **won’t be 5 bytes** but likely **8 bytes** (extra padding).

---

## **Summary: Factors Affecting Data Type Size**

| Factor                                      | Effect                                     |
| ------------------------------------------- | ------------------------------------------ |
| **System Architecture (32-bit vs. 64-bit)** | Changes size of `long`, `pointer`, etc.    |
| **Compiler (GCC, MSVC, Clang)**             | Different size rules (e.g., LP64 vs LLP64) |
| **Operating System**                        | Windows uses LLP64, Linux/macOS use LP64   |
| **Compiler Flags (`-m32`, `-m64`)**         | Forces 32-bit or 64-bit compilation        |
| **Memory Alignment & Padding**              | Extra padding for performance              |

## **What are GCC, MSVC, and Clang?**

These are **compilers** that translate C code into machine code for execution.

### **1. GCC (GNU Compiler Collection)**

- Open-source compiler widely used on **Linux** and **macOS**.
- Supports **C, C++, Java, Fortran, and more**.
- Follows the **LP64 model** on 64-bit systems.

💡 **Command to compile a C program using GCC:**

```sh
gcc program.c -o program
```

### **2. MSVC (Microsoft Visual C++)**

- Microsoft's proprietary compiler used for **Windows development**.
- Part of **Visual Studio**.
- Uses the **LLP64 model** for 64-bit systems.

💡 **Command to compile a C program using MSVC:**

```sh
cl program.c
```

### **3. Clang**

- Developed by **LLVM**.
- Used on **macOS** and **Linux** as an alternative to GCC.
- Faster compilation and better error messages than GCC.
- Uses the **LP64 model** like GCC.

💡 **Command to compile a C program using Clang:**

```sh
clang program.c -o program
```

---

## **What are LP64 and LLP64?**

These are **data models** that define the size of integer and pointer data types in 64-bit systems.

### **1. LP64 (Used by GCC & Clang on Linux/macOS)**

- **L**ong and **P**ointers are **64-bit**.
- `int` remains **32-bit**.
- Used in **Linux, macOS, and UNIX systems**.

🔹 **Sizes in LP64 model:**
| Data Type | Size |
|-----------|------|
| `int` | 4 bytes |
| `long` | 8 bytes |
| `pointer` | 8 bytes |

---

### **2. LLP64 (Used by MSVC on Windows)**

- **L**ong is **32-bit**, but **L**ong **L**ong and **P**ointers are **64-bit**.
- Used in **Windows 64-bit systems**.

🔹 **Sizes in LLP64 model:**
| Data Type | Size |
|-----------|------|
| `int` | 4 bytes |
| `long` | 4 bytes |
| `long long` | 8 bytes |
| `pointer` | 8 bytes |

---

## **Comparison of LP64 vs. LLP64**

| Model     | `int` | `long` | `long long` | `pointer` | Used in                   |
| --------- | ----- | ------ | ----------- | --------- | ------------------------- |
| **LP64**  | 4B    | **8B** | 8B          | **8B**    | Linux, macOS (GCC, Clang) |
| **LLP64** | 4B    | **4B** | 8B          | **8B**    | Windows (MSVC)            |

### **Why Windows Uses LLP64?**

- **Backward compatibility**: Older Windows programs expect `long` to be 4 bytes.
- **Microsoft design choice**: Avoid breaking existing 32-bit applications.

---

### **How C Stores Different Data Types in Memory**

C stores different data types in **binary (0s and 1s)** using specific encoding techniques.

---

## **1. How C Stores an Integer (`int`)**

- **Integers are stored as binary numbers in memory**.
- The size of `int` depends on the system (typically 4 bytes = **32 bits** on modern systems).
- **Example (int `5` stored in memory)**
  ```
  5 in binary (32-bit):  00000000 00000000 00000000 00000101
  ```

### **Storing Negative Integers: Two's Complement**

- C uses **two’s complement** representation to store negative integers.
- **Example (-5 in Two’s Complement for 32-bit)**
  1. Write `5` in binary:
     ```
     00000000 00000000 00000000 00000101
     ```
  2. Take **1’s complement** (flip all bits):
     ```
     11111111 11111111 11111111 11111010
     ```
  3. Add `1` (Two’s complement step):
     ```
     11111111 11111111 11111111 11111011
     ```
  - This is how **-5** is stored in memory.

**✅ Why use Two's Complement?**

- Makes addition and subtraction operations easier.
- Avoids storing both `+0` and `-0`.

---

## **2. How C Stores a Floating-Point Number (`float`)**

- `float` (4 bytes = **32 bits**) is stored using the **IEEE 754 Standard**.
- **IEEE 754 format (Single Precision - 32 bits)**
  ```
  S | Exponent (8 bits) | Mantissa (23 bits)
  ```
  - **S** (1 bit): Sign bit (`0` = positive, `1` = negative)
  - **Exponent** (8 bits): Stores power of 2 (biased by 127)
  - **Mantissa** (23 bits): Stores fractional part

### **Example: Storing `5.75` as a `float`**

1. Convert `5.75` to binary:
   ```
   5 = 101  (Binary)
   0.75 = 0.11 (Binary)
   So, 5.75 = 101.11 (Binary)
   ```
2. Convert to **normalized scientific notation**:
   ```
   1.0111 × 2²
   ```
3. Store as IEEE 754 format:
   ```
   Sign bit = 0 (positive)
   Exponent = 127 + 2 = 129 (10000001 in binary)
   Mantissa = 01110000000000000000000
   ```
4. **Final 32-bit representation in memory**:
   ```
   0 10000001 01110000000000000000000
   ```

**✅ Why IEEE 754?**

- Supports **fractional** values.
- Handles **very large and very small numbers** efficiently.

---

## **3. How C Stores a Character (`char`)**

- `char` takes **1 byte (8 bits)** and stores values using the **ASCII encoding**.
- Example:
  - `'A'` = **65** in decimal → `01000001` in binary.
  - `'B'` = **66** in decimal → `01000010` in binary.
  - `'a'` = **97** in decimal → `01100001` in binary.

---

## **Summary**

| Data Type        | Storage Method                      | Example                                     |
| ---------------- | ----------------------------------- | ------------------------------------------- |
| `int` (positive) | Binary Representation               | `5 → 00000000 00000000 00000000 00000101`   |
| `int` (negative) | Two's Complement                    | `-5 → 11111111 11111111 11111111 11111011`  |
| `float`          | IEEE 754 (Sign, Exponent, Mantissa) | `5.75 → 0 10000001 01110000000000000000000` |
| `char`           | ASCII Encoding                      | `'A' → 01000001 (65 in decimal)`            |

---

## <span style="color:orange" id="t9">Input/Output Instructions in C</span>

1. ### <span style="color:yellow">printf()</span>
   - In C language, printf() function is used to print formatted output to the standard output stdout (which is generally the console screen).
   - The printf function is a part of the C standard library <stdio.h> and it can allow formatting the output in numerous ways.
     > `C printf(“%X”, variableOfXType);` where **%X** is the [format specifier](https://www.geeksforgeeks.org/format-specifiers-in-c/) in C.\*\*
2. ### <span style="color:yellow">scanf()</span>

   - In C programming language, <u>scanf is a function that stands for Scan Formatted String. </u>
   - It is used to read data from stdin (standard input stream i.e. usually keyboard) and then writes the result into the given arguments.

   - It accepts character, string, and numeric data from the user using standard input.
     scanf also uses format specifiers like printf. > `scanf(“%X”, &variableOfXType);` where **%X** is the [format specifier](https://www.geeksforgeeks.org/format-specifiers-in-c/) in C. It is a way to tell the compiler what type of data is in a variable and **& is the address operator** in C, which tells the compiler to change the real value of this variable, stored at this address in the memory.
     > [Code_snippet](inp_op.c) to demonstrate input/output methods

3. ### <span style="color:yellow">Format Specifiers:</span>

#### **📝 Explanation of Format Specifiers**

| Format Specifier | Type                            | Example Output   |
| ---------------- | ------------------------------- | ---------------- |
| `%d`             | Signed integer                  | `-10`            |
| `%u`             | Unsigned integer                | `10`             |
| `%hd`            | Short integer                   | `-5`             |
| `%ld`            | Long integer                    | `123456789`      |
| `%lld`           | Long long integer               | `9876543210`     |
| `%f`             | Floating-point (float)          | `3.141590`       |
| `%lf`            | Floating-point (double)         | `3.141593`       |
| `%Lf`            | Floating-point (long double)    | `3.141593`       |
| `%c`             | Character                       | `A`              |
| `%s`             | String                          | `"Hello, C!"`    |
| `%p`             | Pointer address                 | `0x7ffee04c1234` |
| `%o`             | Octal integer                   | `37777777766`    |
| `%x`             | Hexadecimal (lowercase)         | `ffffff6`        |
| `%X`             | Hexadecimal (uppercase)         | `FFFFFF6`        |
| `%e`             | Scientific notation (lowercase) | `3.141593e+00`   |
| `%E`             | Scientific notation (uppercase) | `3.141593E+00`   |
| `%g`             | General floating-point format   | `3.14159`        |
| `%G`             | General floating-point format   | `3.14159`        |
| `%%`             | Prints `%`                      | `%`              |

#### **✅ Summary of Advanced Formatting**

| Specifier | Description                          | Example        |
| --------- | ------------------------------------ | -------------- |
| `%10d`    | Right-aligned integer                | `"       42"`  |
| `%-10d`   | Left-aligned integer                 | `"42        "` |
| `%.2f`    | Floating-point, 2 decimals           | `"3.14"`       |
| `%10.2f`  | Floating-point, width 10, 2 decimals | `"      3.14"` |
| `%05d`    | Zero-padded integer                  | `"00042"`      |
| `%.3s`    | Print max 3 characters of string     | `"Hel"`        |
| `%+d`     | Force `+` sign for positive          | `"+42"`        |
| `%#x`     | Print hex with `0x`                  | `"0x2a"`       |

## <span style="color:orange" id="t10">Declaration,Definition,Initialisation

In C programming, the terms declaration, definition, and initialization refer to distinct concepts related to variables. Let's clarify each one with examples:

### Declaration:

- Purpose: Tells the compiler about the name and type of the variable.
- Syntax: It typically appears at the beginning of a function or file, where the variable is first introduced.
- Example:

```c
extern int x; // Declaration of variable 'x'
```

> Here, extern int x; informs the compiler that somewhere else in the program there exists a variable named x of type int, but doesn't allocate memory for it.

### Definition:

- Purpose: Allocates memory for the variable.
- Syntax: Includes initialization and the actual creation of the variable.
- Example:

```c
int x; // Definition of variable 'x'
```

> Here, int x; not only declares x but also allocates memory to store an integer value. If this definition appears in a global scope or outside any function, x is considered a global variable.

### Initialization:

- Purpose: Assigns an initial value to the variable at the time of its definition.
- Syntax: Follows the definition and assigns a value using the assignment operator =.
- Example:

```c
int y = 10; // Initialization of variable 'y' with value 10
```

> Here, int y = 10; declares y as an integer, allocates memory for it, and initializes it with the value 10.

> [code snippet](var.c)

## <span style="color:orange" id="t11">Boolean Data Type</span>

In standard C programming (prior to C99), there is no native boolean data type like in some other programming languages such as Java or Python. Instead, C traditionally uses integers for boolean values, where 0 typically represents false, and any non-zero value represents true.

However, starting with the C99 standard, a boolean type was officially introduced through the inclusion of the `<stdbool.h>` header. This header defines the bool type, along with constants true and false.

Here’s how you can use boolean values in C:

- Using <stdbool.h> (C99 and later):

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isTrue = true;
    bool isFalse = false;

    if (isTrue) {
        printf("isTrue is true\n");
    }

    if (!isFalse) {
        printf("isFalse is false\n");
    }

    return 0;
}
```

- Without <stdbool.h> (Traditional C):

```c
#include <stdio.h>

int main() {
    int trueValue = 1;
    int falseValue = 0;

    if (trueValue) {
        printf("trueValue is true\n");
    }

    if (!falseValue) {
        printf("falseValue is false\n");
    }

    return 0;
}
```

> Notes:C99 and later: Use `<stdbool.h>` for boolean variables (bool, true, false).
> Traditional C: Use integers (int) where 0 represents false, and any non-zero value represents true.
> While C99 introduced a standardized boolean type for clarity and consistency, older C codebases or specific embedded systems might still rely on the traditional integer-based approach for boolean logic. Always consider the version of C you are targeting and the specific requirements of your project when deciding how to handle boolean values.

## <span style="color:orange" id="t12">Memory Allocation of Varibale</span>

### Program

```C
#include<stdio.h>
extern int globalvar;
int main()
{
   int localvar;
   localvar=10;
   int anothervar=20;
   printf("globalvar=%d\nlocalvar=%d\nanothervar=%d\n",globalvar,localvar,anothervar);
   return 0;
}
int globalvar=15;
```

In this program, memory is allocated across different sections during compilation and execution. These sections are:

---

### <span style="color: pink;">Text Segment (Code Segment):</span>

- Stores the compiled machine code of the program (instructions).
- Includes the code for functions like `main()` and `printf()`.

### <span style="color: pink;">Data Segment (Global Variables):</span>

- Divided into:
  - **Initialized Data Segment:** Stores global variables that are explicitly initialized (e.g., `int globalvar = 15;`).
  - **Uninitialized Data Segment (BSS):** Stores global or static variables that are declared but not initialized.
- In this program:
  - `globalvar` is stored in the initialized data segment since it is defined as `int globalvar = 15;`.

### <span style="color: pink;">Heap Segment:</span>

- Used for dynamically allocated memory (`malloc()`, `calloc()`, etc.).
- Not used in this program.

### <span style="color: pink;">Stack Segment:</span>

- Stores function calls, local variables, and their context.
- Each function call creates a stack frame, which contains:
  - Local variables of the function.
  - Return address.
  - Saved registers.
  - Function parameters (if any).

---

### <span style="color: orange;">Memory Allocation Table</span>

| Memory Segment    | Contents                        | Value        | Location in Memory       |
| ----------------- | ------------------------------- | ------------ | ------------------------ |
| **Text Segment**  | Program Code (`main`, `printf`) | Machine Code | Fixed (e.g., `0x400000`) |
| **Data Segment**  | `globalvar`                     | 15           | Fixed (e.g., `0x600000`) |
| **Stack Segment** | `main()` Stack Frame:           |              | Grows downward           |
|                   | - `localvar`                    | 10           | Lower address in stack   |
|                   | - `anothervar`                  | 20           | Lower address in stack   |
|                   | - Return Address for `main()`   | `0x400080`   | Higher address in stack  |
| **Heap Segment**  | Unused                          |              | Grows upward             |

---

### <span style="color: yellow;">Step-by-Step Stack Frame Explanation</span>

1. **At Program Start:**

   - The operating system loads the program into memory.
   - Memory is divided into segments (text, data, heap, stack).
   - `globalvar` is placed in the initialized data segment.

2. **Entering `main()`:**

   - A stack frame is created for `main()`.
   - The stack frame contains:
     - Space for local variables: `localvar`, `anothervar`.
     - Saved return address: Location to return after `main()` finishes.
     - CPU registers saved for this function.

3. **Variable Assignments in `main()`:**

   - `localvar` is assigned `10` and stored in the current stack frame.
   - `anothervar` is assigned `20` and stored in the current stack frame.

4. **Calling `printf()`:**

   - A new stack frame is created for the `printf()` call.
   - The stack frame contains:
     - Arguments passed to `printf()` (addresses of `globalvar`, `localvar`, `anothervar`).
     - Return address to go back to `main()`.

5. **Exiting `printf()`:**

   - The stack frame for `printf()` is popped (removed from the stack).
   - Execution returns to `main()`.

6. **Exiting `main()`:**
   - The stack frame for `main()` is popped.
   - The program terminates.

---

<span style="color: orange;">Memory Layout Summary</span>

- **Text Segment:** Contains the program's machine code.
- **Data Segment:** Holds global and static variables.
- **Heap Segment:** Unused in this example.
- **Stack Segment:** Manages function calls and local variables.

### <span style="color: yellow;">Memory Layout and Table</span>

| Memory Segment           | Variable/Content                | Value             | Location in Memory       |
| ------------------------ | ------------------------------- | ----------------- | ------------------------ |
| **Text Segment**         | Program Code (`main`, `printf`) | Machine Code      | Fixed (e.g., `0x400000`) |
| **Data Segment**         | `globalvar`                     | 15                | Fixed (e.g., `0x600000`) |
| **Stack Segment**        | `main()` Stack Frame:           |                   | Grows downward           |
|                          | - `localvar`                    | 10                | Lower address in stack   |
|                          | - `anothervar`                  | 20                | Lower address in stack   |
|                          | - Return Address for `main()`   | `0x400080`        | Higher address in stack  |
| **printf() Stack Frame** | Arguments for `printf()`        | Addresses of vars | Higher address in stack  |
| **Heap Segment**         | Unused                          |                   | Grows upward             |

---

Here’s a complete breakdown of the **rules to construct** **integer**, **real**, and **character** constants in C language, with examples:

---

## 🔢 1. **Integer Constants**

### 🧱 Definition:

An **integer constant** refers to a whole number (no decimal) used directly in a program.

### ✅ Rules:

| Rule | Description                                          | Example                                     |
| ---- | ---------------------------------------------------- | ------------------------------------------- |
| 1    | Must have at least **one digit**                     | `0`, `123`, `9`                             |
| 2    | Must **not** contain **decimal point**               | `89` (✅), `89.0` (❌ - real)               |
| 3    | Can be **positive or negative**                      | `-100`, `+45`                               |
| 4    | No commas, spaces, or symbols allowed                | `1,000` (❌), `1000` (✅)                   |
| 5    | Can be in **Decimal**, **Octal**, or **Hexadecimal** | `10` (decimal), `012` (octal), `0x1F` (hex) |

### ⚠️ Note:

- Octal begins with `0` (e.g., `075`)
- Hexadecimal begins with `0x` or `0X` (e.g., `0xAB`)

---

## 🔣 2. **Real Constants (Floating Point)**

### 🧱 Definition:

A **real constant** represents numbers with a **fractional (decimal) part**.

### ✅ Rules:

| Rule | Description                                                   | Example                           |
| ---- | ------------------------------------------------------------- | --------------------------------- |
| 1    | Must contain at least **one digit**                           | `3.0`, `0.5`                      |
| 2    | Must have a **decimal point** OR use **exponential notation** | `25.50`, `2.5e3`                  |
| 3    | Can be **positive or negative**                               | `-5.5`, `+8.0`                    |
| 4    | No commas, spaces, or extra symbols                           | `12,500.75` (❌), `12500.75` (✅) |

### 📌 Exponential (Scientific) Notation:

- `2.5e3` means `2.5 × 10³` = `2500`
- `6.02e23` (Avogadro’s number)

---

## 🅰️ 3. **Character Constants**

### 🧱 Definition:

A **character constant** is a single character enclosed in **single quotes**.

### ✅ Rules:

| Rule | Description                         | Example                        |
| ---- | ----------------------------------- | ------------------------------ |
| 1    | Must be a **single character only** | `'a'`, `'Z'`, `'9'`, `'!'`     |
| 2    | Enclosed in **single quotes (' ')** | `'b'`, `'@'`                   |
| 3    | You can use **escape sequences**    | `'\n'` (newline), `'\t'` (tab) |
| 4    | Cannot be more than one character   | `'ab'` (❌), `'a'` (✅)        |

---

## 🔁 Summary Table:

| Constant Type | Example   | Valid? | Notes           |
| ------------- | --------- | ------ | --------------- |
| Integer       | `100`     | ✅     | Decimal         |
| Integer       | `075`     | ✅     | Octal           |
| Integer       | `0xFF`    | ✅     | Hex             |
| Real          | `3.14`    | ✅     | Fraction        |
| Real          | `2e5`     | ✅     | Scientific      |
| Real          | `1,000.5` | ❌     | No commas       |
| Character     | `'A'`     | ✅     | Single char     |
| Character     | `'12'`    | ❌     | Too many chars  |
| Character     | `'\n'`    | ✅     | Escape sequence |

---

Great question! Understanding **memory layout** in C is crucial for mastering pointers, debugging, and systems programming. Let's break it down.

---

## <span id="t13">🧠 **How Memory is Arranged in a C Program**</span>

When a C program is compiled and executed, its memory is divided into several **well-defined sections**:

### 📊 **Typical Memory Layout (Top → Bottom)**

```txt
+---------------------+  High memory addresses
|      Stack          |  ↓ Grows downward
+---------------------+
|      Unused         |
+---------------------+
|       Heap          |  ↑ Grows upward
+---------------------+
|    BSS Segment      |  Uninitialized global/static variables
+---------------------+
|    Data Segment     |  Initialized global/static variables
+---------------------+
|    Text Segment     |  Code (functions like main)
+---------------------+  Low memory addresses
```

---

## 📍 **Memory Sections Explained**

| Section   | Contents                                             | Lifetime        | Access Scope        | Growth Direction |
| --------- | ---------------------------------------------------- | --------------- | ------------------- | ---------------- |
| **Text**  | Compiled program code (e.g., `main()`)               | Entire program  | Read-only (usually) | Fixed            |
| **Data**  | Initialized global/static variables                  | Entire program  | Global/static       | Fixed            |
| **BSS**   | Uninitialized global/static variables                | Entire program  | Global/static       | Fixed            |
| **Heap**  | Dynamically allocated memory (`malloc`, `new`, etc.) | Manual          | Program-wide        | Upward           |
| **Stack** | Local variables, function calls, return addresses    | Auto (per call) | Local to function   | Downward         |

---

## 🔍 **Address Range Example Interpretation**

Given:

```
main() (Text):              0x00007ff746e514d0
Initialized global (Data):  0x00007ff746e58000
Static Variable (Data):     0x00007ff746e58004
Uninit Global (BSS):        0x00007ff746e5d030
Heap Allocation:            0x0000024580656b40
Local var in main() (Stack):0x00000047e37ff804
```

### 🔢 Address Trend:

- **Text Section (`main`)** is located in low memory.
- **Data Section** follows — for initialized global/static variables.
- **BSS Section** follows Data — for uninitialized global/static variables.
- **Heap** starts after BSS and grows **upward**.
- **Stack** starts at high memory and grows **downward**.

So:
🧠 **Text < Data < BSS < Heap < Stack**

---

## 🧪 **Code Example** (View Memory Sections)

```c
#include <stdio.h>
#include <stdlib.h>

int global_var = 100;            // Data section
static int static_var = 200;     // Data section
int uninit_global;               // BSS section

int main() {
    int local_var = 10;          // Stack
    static int local_static = 20;// Data
    int* heap_ptr = malloc(sizeof(int)); // Heap
    *heap_ptr = 30;

    printf("===== Memory Section Addresses =====\n");
    printf("Address of main() (Text Section): %p\n", (void*)main);
    printf("Address of Initialized Global (Data): %p\n", (void*)&global_var);
    printf("Address of Static Variable (Data): %p\n", (void*)&static_var);
    printf("Address of Uninitialized Global (BSS): %p\n", (void*)&uninit_global);
    printf("Address of Heap Allocation (Heap): %p\n", (void*)heap_ptr);
    printf("Address of Local Variable (Stack): %p\n", (void*)&local_var);
    printf("Address of Local Static Variable (Data): %p\n", (void*)&local_static);

    free(heap_ptr);
    return 0;
}
```

---

## 🧠 Summary

| Segment | Contains                         | Lifetime            | Growth |
| ------- | -------------------------------- | ------------------- | ------ |
| Text    | Executable code (e.g., `main()`) | Entire program      | –      |
| Data    | Initialized global/static vars   | Entire program      | –      |
| BSS     | Uninitialized global/static vars | Entire program      | –      |
| Heap    | `malloc`, `calloc`, `new` data   | Until `free()`      | ↑      |
| Stack   | Function calls, local variables  | Until function ends | ↓      |

---

### 🔧 Tools to Inspect Further

- `objdump -h your_binary` — see memory section layout
- `size your_program` — see text/data/bss sizes
- `valgrind` — memory debugging

---

</body>
</html>
