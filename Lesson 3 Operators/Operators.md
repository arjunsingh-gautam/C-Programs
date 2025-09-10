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
    <a href="#t1">What do you mean by Operators</a>
    <a href="#t2">Special Operators</a>
    <a href="#t3">Unary Operator</a>
    <a href="#t4">Arithmatic Operator</a>
    <a href="#t5">Relational Operator </a>
    <a href="#t6">Logical Operator</a>
    <a href="#t7">Bitwise Operator</a>
    <a href="#t8">Assignment Operator</a>
    <a href="#t9">Operator Precedence and Associativity</a>
    
</div>

# <span style="color:#33ff00">Operators in C</span>

## <span style="color:orange" id="t1">What do you mean by Operators</span>

- Operators are tokens which help us to manipulate data by peforming mathematical and logical operation on data
- Data being manipulated/on which the operator operates is called **Operand**
- Depending on no. of operands the operator can operate on there are three types of Opearators in C
  - **Unary Operator**: Operates on a single operand.
    - Unary Operators availabel in C are `sizeof(),++,--,+,-,&,!,~,(type),*`
  - **Binary Operator**:Operates on two operands
    - Binary Operators in C are:
      - Arithmatic Operators:`+,-,*,/,%`
      - Relational Operators:`<,>,<=,>=,==,!=`
      - Logical Opearators:`&&,||,!`
      - Bitwise Operators:`&,|,^,~,>>,<<`
      - Assignment Operator:`=,+=,-=,*=,/=`
  - **Ternary Operator**: Operates on three operands
    - Conditional Statement/Single-line if-else: `?:`

## <span style="color: orange;" id="t2">Special Operators</span>

| <span style="color: pink;">Operator</span> | <span style="color: pink;">Function</span>                           |
| ------------------------------------------ | -------------------------------------------------------------------- |
| **`sizeof`**                               | Returns the size of a data type or variable in bytes.                |
| **`&`**                                    | Address-of operator, returns the memory address of a variable.       |
| **`*`**                                    | Dereference operator, accesses the value stored at a memory address. |
| **`->`**                                   | Accesses a structure's member via a pointer.                         |
| **`.`**                                    | Accesses a structure's member directly.                              |
| **`(type)`**                               | Type casting operator, converts a value from one type to another.    |

---

## <span style="color:orange" id="t3"> Unary Operators </span>

### <span style="color:pink">Increment Operator `++`</span>

- Working: `++x/x++ --> x+1`
- Increment can be used in two ways: Postincrement,Preincrement
- **Post-Increment** `x++` has least precedence lower than assignment operator
- **Pre-Increment** `++x` has higher precedence than assignment operator

### <span style="color:pink">Decrement Operator `--`</span>

- Working: `--x/x-- --> x-1`
- Increment can be used in two ways: Postincrement,Preincrement
- **Post-Increment** `x--` has least precedence lower than assignment operator
- **Pre-Increment** `--x` has higher precedence than assignment operator

### <span style="color:pink">Address of Operator `&`</span>

- Used to tell the address of the variable
- Working: `&(var_name)---> return address of variable`

### <span style="color:pink">Sizeof Operator `sizeof`</span>

- Used to tell the size allocated in bytes to the variable based on it's data-type and type of system
- Working: `sizeof(arg)--> integer value which represents no. of bytes allocated`
  - arguments:variable_name,value

### <span style="color:pink">Dereference Operator `*`</span>

- Description: Accesses the value stored at a memory address (used with pointers).
- Working: `*ptr --> Value at the address stored in ptr.`
- Examples:

```c
int x = 10;
int *ptr = &x; // ptr stores the address of x
printf("Value at address: %d\n", *ptr); // Output: 10
```

### <span style="color:pink">Unary Minus Operator `-`</span>

- Description: Negates a value (changes its sign).
- Working: `-x --> Returns the negative value of x.`
- Examples:

```c
int x = 5;
int y = -x; // y = -5
```

### <span style="color:pink">Post vs Pre Increment</span>

```c
#include <stdio.h>
int main()
{
    int x = 5, y, z;
    y = x++; // x++ has least precedece than = operator   Ouptut:y=5 x=6
    printf("the value of x is: %d and y is: %d\n", x, y);
    z = ++x; // ++x has more precedence than assignment = operator   Output:z=7 x=7
    printf("the value of x is: %d and z is: %d\n", x, z);
    return 0;
}
```

---

## <span style="color:orange" id="t4">Arithmatic Operator</span>

Arithmetic operators in C are used to perform basic mathematical operations like addition, subtraction, multiplication, division, and modulus. Let's explore their working, constraints, and how the data type of the result depends on the operands.

### <span style="color:pink">Operators and Their Functionality</span>

| <span style="color: pink;">Operator</span> | <span style="color: pink;">Description</span>                          | <span style="color: pink;">Example</span> | <span style="color: pink;">Result</span> |
| ------------------------------------------ | ---------------------------------------------------------------------- | ----------------------------------------- | ---------------------------------------- |
| **Addition**                               | Adds two operands.                                                     | a + b                                     | Sum of a and b                           |
| **Subtraction**                            | Subtracts the second operand from the first.                           | a - b                                     | Difference between a and b               |
| **Multiplication**                         | Multiplies two operands.                                               | a \* b                                    | Product of a and b                       |
| **Division**                               | Divides the first operand by the second.                               | a / b                                     | Quotient of a divided by b               |
| **Modulus**                                | Returns the remainder when the first operand is divided by the second. | a % b                                     | Remainder when a is divided by b         |

### <span style="color:pink">Working of Arithmetic Operators</span>

1. **Addition (+)**

   - The addition operator adds two values together.
   - Syntax:
     ```c
     result = operand1 + operand2;
     ```
   - Example:
     ```c
     int a = 5, b = 3;
     int result = a + b; // result = 8
     ```

2. **Subtraction (-)**

   - The subtraction operator subtracts the second operand from the first.
   - Syntax:
     ```c
     result = operand1 - operand2;
     ```
   - Example:
     ```c
     int a = 5, b = 3;
     int result = a - b; // result = 2
     ```

3. **Multiplication (\*)**

   - The multiplication operator multiplies two operands.
   - Syntax:
     ```c
     result = operand1 * operand2;
     ```
   - Example:
     ```c
     int a = 5, b = 3;
     int result = a * b; // result = 15
     ```

4. **Division (/)**

   - The division operator divides the first operand by the second.
   - Syntax:
     ```c
     result = operand1 / operand2;
     ```
   - Example:
     ```c
     int a = 5, b = 2;
     int result = a / b; // result = 2 (integer division)
     ```
     - **Note**: In integer division, the fractional part is discarded (i.e., only the quotient is considered). If b is 0, it results in a runtime error (division by zero).

5. **Modulus (%)**
   - The modulus operator returns the remainder when the first operand is divided by the second.
   - Syntax:
     ```c
     result = operand1 % operand2;
     ```
   - Example:
     ```c
     int a = 5, b = 2;
     int result = a % b; // result = 1 (remainder of 5 divided by 2)
     ```
     - **Note**: The modulus operator works only with integers and cannot be used with floating-point values.

### <span style="color:pink">Constraints on Data Types</span>

Arithmetic operators in C work on operands of various data types, but there are some constraints on how they behave, depending on the data type of the operands.

1. **Addition, Subtraction, Multiplication, and Division**

   - These operators can be used with integers and floating-point numbers (`float`, `double`).
   - **Integer Arithmetic**: When both operands are integers, the result will also be an integer. If the result has a fractional part, it will be truncated (i.e., the fractional part is discarded).
   - **Floating-point Arithmetic**: If either of the operands is a floating-point number, the result will be a floating-point value, and precision is maintained.

2. **Division and Modulus with Integers**

   - **Integer Division**: When dividing two integers, the result will be truncated to an integer.
     ```c
     int a = 7, b = 2;
     int result = a / b; // result = 3 (fractional part discarded)
     ```
   - **Modulus Operation**: The modulus operator (`%`) works only with integers, and the result will always be an integer.
     ```c
     int a = 7, b = 3;
     int result = a % b; // result = 1 (remainder of 7 divided by 3)
     ```

3. **Overflow and Underflow**
   - Overflow occurs when the result of an arithmetic operation exceeds the maximum value the data type can hold.
   - Underflow happens when the result of an operation is less than the minimum value that the data type can store.
   - For example, adding two very large integers may cause overflow in integer arithmetic, and dividing a small floating-point number by a very large number may result in underflow.

### <span style="color:pink">Data Type of the Result Based on Operand Types</span>

The data type of the result depends on the data types of the operands. Here’s a table to explain how the result data type is determined based on the operands:

| Operand 1 | Operand 2 | Result Data Type | Explanation                                                   |
| --------- | --------- | ---------------- | ------------------------------------------------------------- |
| int       | int       | int              | Integer operation, result is integer.                         |
| int       | float     | float            | Integer converted to float for operation, result is float.    |
| float     | float     | float            | Floating-point operation, result is float.                    |
| double    | float     | double           | The result will be double, since double has higher precision. |
| int       | double    | double           | The result will be double due to type promotion.              |
| char      | char      | int              | Char is promoted to int for arithmetic, result is int.        |
| int       | int       | int              | Integer division discards fractions.                          |

<span style="color:orange">Why `char + char` Results in `int` in C</span>

In C, when you perform an arithmetic operation like addition on two `char` variables (or literals), the result is promoted to `int`. This is due to **integer promotion**, a rule in C where smaller data types (like `char`, `short`, etc.) are promoted to `int` before performing arithmetic operations.

<span style="color:pink">Char Type</span>

- The `char` data type in C is typically **1 byte (8 bits)** in size and can hold values from **-128 to 127** (signed) or **0 to 255** (unsigned).
- Since `char` is a small data type, it has limitations in performing arithmetic operations, which can lead to overflow or loss of precision.

<span style="color:pink">Integer Promotion</span>

- According to the C standard, when performing arithmetic operations on types smaller than `int`, like `char`, `short`, etc., the operands are promoted to `int` before the operation is performed.
- This ensures that the arithmetic is done in a larger, more efficient data type, typically `int` (usually 4 bytes), which is more capable of handling a wider range of values and arithmetic operations without overflow.

### <span style="color:pink">Why Promotion Happens</span>

1. **Prevent Data Loss**: The `char` data type is too small for certain operations. When performing arithmetic on `char`, promoting the operand to `int` ensures that the operation can be carried out safely, without data loss due to overflow.
2. **Efficiency**: Modern processors are optimized to handle integer operations on 4-byte integers more efficiently than on smaller types. By promoting `char` to `int`, C ensures that the operation benefits from the processor's capabilities.
3. **Consistency**: By promoting `char` and other small data types to `int`, the C language maintains consistency in how arithmetic is handled for all types, avoiding edge cases or undefined behavior that might arise from working with very small data types.

<span style="color:pink">Example</span>

```c
char a = 100, b = 50;
int result = a + b; // result = 150
```

---

## <span style="color:orange" id="t5">Relational Operators in C</span>

Relational operators are used to compare two values or expressions. These operators evaluate the relationship between the operands and return a result in the form of a boolean value: either true (1) or false (0). These operators are commonly used in conditions like if statements, loops, and other control structures.

### <span style="color:pink">Common Relational Operators</span>

- **`<` (Less Than)**:
  - **Syntax**: `a < b`
  - **Description**: Returns true if `a` is less than `b`.
  - **Example**: `5 < 10` returns true (1), while `10 < 5` returns false (0).
- **`>` (Greater Than)**:
  - **Syntax**: `a > b`
  - **Description**: Returns true if `a` is greater than `b`.
  - **Example**: `15 > 10` returns true (1), while `5 > 10` returns false (0).
- **`<=` (Less Than or Equal To)**:
  - **Syntax**: `a <= b`
  - **Description**: Returns true if `a` is less than or equal to `b`.
  - **Example**: `5 <= 10` returns true (1), while `10 <= 5` returns false (0).
- **`>=` (Greater Than or Equal To)**:
  - **Syntax**: `a >= b`
  - **Description**: Returns true if `a` is greater than or equal to `b`.
  - **Example**: `10 >= 5` returns true (1), while `5 >= 10` returns false (0).
- **`==` (Equal To)**:
  - **Syntax**: `a == b`
  - **Description**: Returns true if `a` is equal to `b`.
  - **Example**: `10 == 10` returns true (1), while `10 == 5` returns false (0).
- **`!=` (Not Equal To)**:
  - **Syntax**: `a != b`
  - **Description**: Returns true if `a` is not equal to `b`.
  - **Example**: `10 != 5` returns true (1), while `10 != 10` returns false (0).

### <span style="color:pink">How Relational Operators Work in C</span>

Relational operators evaluate expressions by comparing the operands based on the operator being used. The operands are typically of numeric data types (like `int`, `float`, `double`), but can also be `char` types, where they are compared based on their underlying ASCII values.

The result of the comparison is an integer value:

- **1** (true) if the condition is satisfied.
- **0** (false) if the condition is not satisfied.

**Example**:

```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("a < b: %d\n", a < b);   // 1 (true)
    printf("a > b: %d\n", a > b);   // 0 (false)
    printf("a == b: %d\n", a == b); // 0 (false)
    return 0;
}
```

### <span style="color:pink">Data Type of Result Based on Operand Data Type</span>

The result of a relational operation in C is always an integer (`int`), which is either **1 (true)** or **0 (false)**, regardless of the operand types. However, there are important things to note regarding the data types of the operands:

- **Operands of Different Types**: If the operands are of different types, they will undergo type promotion according to the rules of C. For example, if one operand is a `float` and the other is an `int`, the `int` will be promoted to `float` before comparison.

- **Boolean-like Behavior**: In C, the result of a relational operator is always `0` (false) or `1` (true), even if the operands are non-numeric types (such as `char`). The result is always an integer, even when comparing floating-point or character values.

### <span style="color:yellow">Step-by-Step Evaluation of 8 > 10 < 9 in C</span>

In C, when you write an expression like `8 > 10 < 9`, it gets evaluated in two steps, based on the way relational operators work and how C handles the precedence and associativity of operators. C does not evaluate this as a chained expression like some other languages (e.g., Python). Instead, C evaluates each comparison one by one from left to right.

#### <span style="color:pink">Step-by-Step Evaluation</span>

The expression `8 > 10 < 9` is interpreted as:

1. **First Comparison (8 > 10)**:
   - The result of `8 > 10` is false, which in C is represented as `0`.
2. **Second Comparison (0 < 9)**:
   - The result of `0 < 9` is true, which in C is represented as `1`.

#### <span style="color:pink">Final Result</span>

So, the entire expression `8 > 10 < 9` evaluates to `1` (true), but the logic here is that:

- The first comparison (`8 > 10`) evaluates to false (`0`).
- The second comparison (`0 < 9`) evaluates to true (`1`).

#### <span style="color:pink">Why This Happens:</span>

C evaluates relational operators (`>`, `<`, `==`, `!=`, `<=`, `>=`) left to right. It first evaluates the left-most relational expression (`8 > 10`), and then uses the result (which is an integer) in the next comparison (`0 < 9`). Since `0 < 9` is true, the final result is `1`.

#### <span style="color:pink">Important Note:</span>

This is different from what one might intuitively expect in mathematics (where we would expect something like `(8 > 10) && (10 < 9)`), but this is how C handles operator precedence and associativity for relational operators.

---

## <span style="color:orange" id="t6">Logical Operators in C</span>

Logical operators in C are used to combine or invert boolean expressions. They operate on boolean-like values, returning 1 for true and 0 for false. These operators are essential for making decisions in control structures like `if`, `while`, and `for`.

### <span style="color:pink">Common Logical Operators</span>

- **&& (Logical AND)**

  - **Syntax:** `expr1 && expr2`
  - **Description:** Returns true (1) if both `expr1` and `expr2` are true, otherwise returns false (0).
  - **Working:** `expr1` is evaluated first. If `expr1` is false (0), `expr2` is not evaluated due to short-circuiting (this is an optimization to save unnecessary computations). If `expr1` is true (non-zero), `expr2` is evaluated.
  - **Example:**
    ```c
    int x = 5, y = 10;
    if (x > 3 && y < 15) {
        printf("Both conditions are true\n");
    }
    ```
    In this example, both conditions (`x > 3` and `y < 15`) are true, so the result is true and the statement is executed.

- **|| (Logical OR)**

  - **Syntax:** `expr1 || expr2`
  - **Description:** Returns true (1) if either `expr1` or `expr2` is true (or both), otherwise returns false (0).
  - **Working:** `expr1` is evaluated first. If `expr1` is true (non-zero), `expr2` is not evaluated due to short-circuiting. If `expr1` is false (0), then `expr2` is evaluated.
  - **Example:**
    ```c
    int x = 5, y = 10;
    if (x > 3 || y < 5) {
        printf("At least one condition is true\n");
    }
    ```
    In this case, `x > 3` is true, so the result of the logical OR is true, and the statement is executed.

- **! (Logical NOT)**

  - **Syntax:** `!expr`
  - **Description:** Reverses the logical value of the operand. Returns true (1) if `expr` is false (0), and false (0) if `expr` is true (non-zero).
  - **Working:** Evaluates the expression and returns 1 for false and 0 for true.
  - **Example:**
    ```c
    int x = 5;
    if (!(x < 3)) {
        printf("x is not less than 3\n");
    }
    ```
    Since `x < 3` is false, `!(x < 3)` becomes true, and the statement is executed.

### <span style="color:pink">Truthy and Falsy Values in C</span>

In C, there are no explicit boolean types (true and false) like in higher-level languages. Instead, truthy and falsy values are based on integers:

- **Truthy Values:** Any value that is non-zero is considered true in C. This includes positive and negative numbers, as well as pointers that are not `NULL`.
- **Falsy Values:** The only value considered false is `0`.

Excellent question! Let's dive deep into the **difference in logical operator evaluation in C vs Python**, especially in the context of **non-Boolean operands**.

---

## 🔁 **Logical Operators in Python vs C:**

### ✅ **Python**:

Logical operators (`and`, `or`, `not`) **return the actual operand** (not just `True` or `False`), and Python treats many types (strings, numbers, lists, etc.) as truthy or falsy.

| Operator | Behavior                  | Returns        |
| -------- | ------------------------- | -------------- |
| `and`    | First falsy or last value | Actual operand |
| `or`     | First truthy value        | Actual operand |
| `not`    | Negates truthiness        | `True`/`False` |

#### ▶️ **Example in Python**:

```python
>>> "Arjun" and "Anuj"
'Anuj'      # returns second operand

>>> "" and "Anuj"
''          # returns first falsy operand

>>> "Arjun" or ""
'Arjun'     # returns first truthy operand

>>> "" or "Anuj"
'Anuj'
```

> ✅ Python uses **short-circuit evaluation** and **returns the actual operand**, not just `True` or `False`.

---

### ✅ **C Language**:

Logical operators (`&&`, `||`, `!`) **only evaluate truthiness** and return an **integer**:

- `0` → false
- `1` → true

#### ▶️ **Example in C**:

```c
char *str1 = "Arjun";
char *str2 = "Anuj";
int result = (str1 && str2);   // both non-null => true (1)

char *str3 = "";
int result2 = (str3 && str2);  // str3 is non-null ("" is still valid) => true (1)

char *str4 = NULL;
int result3 = (str4 && str2);  // NULL => false (0)
```

> ✅ C always returns **0 or 1** (integer) for logical expressions.
> It does not return the actual operand.

---

### 🧠 **Key Differences**

| Feature                  | Python                                   | C                                           |
| ------------------------ | ---------------------------------------- | ------------------------------------------- |
| Operand Types            | Any object (str, int, list, etc.)        | Only evaluated as truthy (non-zero pointer) |
| Return Value             | Actual operand                           | Always `0` (false) or `1` (true)            |
| Short-circuit evaluation | Yes                                      | Yes                                         |
| Use in expressions       | Can be used to choose values dynamically | Only control flow or logic tests            |

---

### ✅ Summary Example:

| Expression    | Python Result | C Result                     |
| ------------- | ------------- | ---------------------------- |
| `"A" and "B"` | `"B"`         | `1` (non-zero)               |
| `"" and "B"`  | `""`          | `1` (if pointer is not NULL) |
| `"A" or "B"`  | `"A"`         | `1`                          |
| `"" or "B"`   | `"B"`         | `1`                          |

---

### 🛠 Use-case Illustration:

### 🔸 Python — Value Selection:

```python
value = user_input or "Default"
```

### 🔸 C — Only truthy check:

```c
value = (user_input != NULL) ? user_input : "Default";
```

---

### ✅ TL;DR:

- **Python returns actual operands** in logical expressions.
- **C returns only 0 or 1** (boolean logic) in logical expressions.
- Both use **short-circuit evaluation**, but **Python is more expressive** in chaining and selecting values dynamically.

---

## <span style="color:orange" id="t7">Bitwise Operators in C</span>

Bitwise operators in C perform operations on the individual bits of integer data types. These operators work directly on the bits, which makes them very efficient for low-level operations like setting, clearing, and toggling bits. Bitwise operations are commonly used in tasks like encryption, compression, graphics, networking, and low-level device control.

### <span style="color:pink">Common Bitwise Operators</span>

- **~ (Bitwise NOT, Complement)**

  - **Description:** Inverts the bits of its operand. Each 0 bit becomes 1, and each 1 bit becomes 0.
  - **Working:** `~x` flips all bits of `x`.
  - **Special Point:** This operator only works on integers and the result is also an integer. It is a unary operator, meaning it operates on a single operand.
  - **Example:**
    ```c
    int x = 5;   // Binary: 0101
    int result = ~x;   // Result: -6 (Binary: 1010, 2's complement representation)
    printf("%d", result);  // Output: -6
    ```

- **<< (Bitwise Left Shift)**

  - **Description:** Shifts the bits of the left operand to the left by the number of positions specified by the right operand. Zeros are shifted into the empty bit positions on the right.
  - **Working:** `x << n` shifts the bits of `x` left by `n` positions. This is equivalent to multiplying `x` by `2^n`.
  - **Special Point:** The left shift operator only works on integer types. If the shifted value exceeds the capacity of the variable type, the result can be unpredictable (overflow).
  - **Example:**
    ```c
    int x = 5;    // Binary: 0101
    int result = x << 1;  // Result: 10 (Binary: 1010)
    printf("%d", result);  // Output: 10
    ```

- **>> (Bitwise Right Shift)**

  - **Description:** Shifts the bits of the left operand to the right by the number of positions specified by the right operand. The sign bit (for signed numbers) is copied into the leftmost bits for signed integers (arithmetic shift) and zeros are shifted into the leftmost bits for unsigned integers (logical shift).
  - **Working:** `x >> n` shifts the bits of `x` right by `n` positions.
  - **Special Point:** For signed integers, the behavior might vary depending on the compiler and platform. It is an arithmetic shift for signed integers, but a logical shift for unsigned integers.
  - **Example:**
    ```c
    int x = 10;    // Binary: 1010
    int result = x >> 1;  // Result: 5 (Binary: 0101)
    printf("%d", result);  // Output: 5
    ```

- **& (Bitwise AND)**

  - **Description:** Performs a logical AND operation on each pair of corresponding bits in two operands. If both bits are 1, the resulting bit is 1, otherwise it is 0.
  - **Working:** `x & y` performs bitwise AND of `x` and `y`.
  - **Special Point:** It is commonly used for masking, i.e., extracting specific bits from a number.
  - **Example:**
    ```c
    int x = 5;    // Binary: 0101
    int y = 3;    // Binary: 0011
    int result = x & y;   // Result: 1 (Binary: 0001)
    printf("%d", result);  // Output: 1
    ```

- **| (Bitwise OR)**

  - **Description:** Performs a logical OR operation on each pair of corresponding bits. If either bit is 1, the resulting bit is 1, otherwise it is 0.
  - **Working:** `x | y` performs bitwise OR of `x` and `y`.
  - **Special Point:** The OR operation is often used for setting specific bits in a number.
  - **Example:**
    ```c
    int x = 5;    // Binary: 0101
    int y = 3;    // Binary: 0011
    int result = x | y;   // Result: 7 (Binary: 0111)
    printf("%d", result);  // Output: 7
    ```

- **^ (Bitwise XOR)**

  - **Description:** Performs a logical XOR (exclusive OR) operation on each pair of corresponding bits. If the bits are the same (both 0 or both 1), the resulting bit is 0. If the bits are different, the resulting bit is 1.
  - **Working:** `x ^ y` performs bitwise XOR of `x` and `y`.
  - **Special Point:** XOR is often used in problems involving toggling of bits, finding differing bits, or checking parity.
  - **Example:**
    ```c
    int x = 5;    // Binary: 0101
    int y = 3;    // Binary: 0011
    int result = x ^ y;   // Result: 6 (Binary: 0110)
    printf("%d", result);  // Output: 6
    ```

### <span style="color:yellow">Special Points and Other Details about Each Operator</span>

- **Bitwise NOT ~:**

  - This operator performs a two's complement inversion of all the bits in the operand.
  - For example, the result of `~x` where `x` is 5 (binary `0101`) is -6 (binary `1010` in two's complement form).
  - **Warning:** Bitwise NOT can sometimes lead to unexpected results due to the representation of signed integers (two's complement).

- **Left Shift <<:**

  - Left shifting a number is equivalent to multiplying it by a power of 2. For example, `x << 1` is the same as multiplying `x` by `2^1 = 2`, `x << 2` is the same as multiplying `x` by `2^2 = 4`.
  - Left shifting a negative number could produce unexpected results, depending on whether the number is signed or unsigned.

- **Right Shift >>:**

  - Right shifting a number is equivalent to dividing it by a power of 2 (for signed integers, the behavior depends on the platform: arithmetic shift for signed and logical shift for unsigned).
  - For signed integers, right shifting can be tricky because of how the sign bit (the leftmost bit) is handled during arithmetic shift.

- **AND &:**

  - Used to mask specific bits in a number. For example, `x & 1` isolates the least significant bit of `x`.
  - **Common use cases:** Checking if a number is even or odd (`x & 1`), toggling or setting specific bits.

- **OR |:**

  - Used to set specific bits in a number. For example, `x | 1` forces the least significant bit of `x` to 1.
  - **Common use cases:** Turning on specific flags, setting bits in a register, etc.

- **XOR ^:**
  - Often used to toggle specific bits. For example, `x ^ 1` will flip the least significant bit of `x`.
  - **Common use case:** XOR is used in algorithms like swapping two variables without a temporary variable (i.e., `a = a ^ b; b = a ^ b; a = a ^ b;`).

---

## <span style="color:orange" id="t8">Assignment Operators in C</span>

In C programming, assignment operators are used to assign a value to a variable. They allow the developer to store data in variables and modify these variables in various ways. The assignment operator (`=`) is the basic operator, but there are other compound assignment operators that combine an arithmetic operation with assignment, making the code more concise.

### <span style="color:pink">Basic Assignment Operator =</span>

**Description:** The basic assignment operator (`=`) is used to assign the value of the right operand to the left operand.

**Working:** The value on the right-hand side of the `=` operator is stored in the variable on the left-hand side.

**Example:**

```c
int x = 5;   // Assigns the value 5 to x
int y;
y = x;        // Assigns the value of x (which is 5) to y
```

### <span style="color:yellow">Compound Assignment</span>

| Operator | Description                                                                      | Working                  | Example                    |
| -------- | -------------------------------------------------------------------------------- | ------------------------ | -------------------------- |
| `+=`     | Adds the right operand to the left operand                                       | `x += y` → `x = x + y`   | `int x = 5; x += 3; // 8`  |
| `-=`     | Subtracts the right operand from the left operand                                | `x -= y` → `x = x - y`   | `int x = 5; x -= 2; // 3`  |
| `*=`     | Multiplies the left operand by the right operand                                 | `x *= y` → `x = x * y`   | `int x = 5; x *= 4; // 20` |
| `/=`     | Divides the left operand by the right operand                                    | `x /= y` → `x = x / y`   | `int x = 10; x /= 2; // 5` |
| `%=`     | Assigns the remainder of division to the left operand                            | `x %= y` → `x = x % y`   | `int x = 10; x %= 3; // 1` |
| `<<=`    | Left shifts the left operand by the right operand's value                        | `x <<= y` → `x = x << y` | `int x = 2; x <<= 1; // 4` |
| `>>=`    | Right shifts the left operand by the right operand's value                       | `x >>= y` → `x = x >> y` | `int x = 4; x >>= 1; // 2` |
| `&=`     | Performs bitwise AND on both operands and assigns the result to the left operand | `x &= y` → `x = x & y`   | `int x = 5; x &= 3; // 1`  |
| `^=`     | Performs bitwise XOR on both operands and assigns the result to the left operand | `x ^= y` → `x = x ^ y`   | `int x = 5; x ^= 3; // 6`  |

### <span style="color:pink">Notes:</span>

1. Compound assignment operators combine arithmetic or bitwise operations with assignment, making the code more concise.
2. These operators can be applied to variables of numeric or integer types depending on the operator.

Let me know if you'd like to add more details or examples!

#### <span style="color:pink">Basic Assignment (`=`):</span>

1. The right-hand side expression is evaluated first, and then the result is stored in the left-hand side variable.
2. The types of the operands must be compatible for assignment, or explicit type casting must be used.

#### <span style="color:pink">Compound Assignment Operators:</span>

1. These operators combine an arithmetic operation with assignment, reducing the need for repetitive code.
2. The type of the left operand must support the operation.
   - Example: Using `+=` with a string (not an arithmetic type) will result in a compile-time error.

#### <span style="color:pink">Operator Precedence and Associativity:</span>

1. Assignment operators (`=`, `+=`, `-=`, etc.) have **right-to-left associativity**.
   - This means that if multiple assignment operators appear in an expression, the rightmost one is evaluated first.
   - **Example:**
     ```c
     int a, b;
     a = b = 5; // Assigns 5 to b first, then assigns the value of b to a
     ```

#### <span style="color:pink">Type Compatibility:</span>

1. The data type of the left operand must be able to hold the value of the right operand.
   - **Incompatible types** will result in a compile-time error.
2. Implicit type conversions (or type casting) may be required if the types are different.
   - Automatic conversion doesn’t always occur safely.  
     **Example:** Assigning a `double` to an `int` will lose the decimal portion.

#### <span style="color:pink">Efficient Use:</span>

1. **Compound assignment operators** are often used to improve code readability and efficiency.
   - **Example:**
     ```c
     int x = 5;
     x += 10; // More compact than x = x + 10
     ```

---

## <span style="color:orange" id="t9">Operator Precedence and Associativity in C</span>

Operator precedence defines the order in which operators are evaluated in an expression. Associativity determines the direction in which operators of the same precedence are evaluated (either left to right or right to left).

---

### <span style="color:pink">Order of Operator Precedence in C</span>

Below is the list of operators in C, ordered from highest to lowest precedence:

| **Operator**                      | **Description**                                                                       | **Associativity** |
| --------------------------------- | ------------------------------------------------------------------------------------- | ----------------- |
| `()`                              | Parentheses (used for grouping expressions)                                           | Left to Right     |
| `[]`                              | Array subscript (access element in array)                                             | Left to Right     |
| `.`                               | Member access (for structure)                                                         | Left to Right     |
| `->`                              | Member access (for pointer to structure)                                              | Left to Right     |
| `++`, `--`                        | Increment, Decrement (post/pre)                                                       | Left to Right     |
| `!`, `~`, `+`, `-`, `sizeof`      | Logical NOT, Bitwise NOT, Unary plus, Unary minus                                     | Right to Left     |
| `*`, `/`, `%`                     | Multiplication, Division, Modulus                                                     | Left to Right     |
| `+`, `-`                          | Addition, Subtraction                                                                 | Left to Right     |
| `<<`, `>>`                        | Left shift, Right shift                                                               | Left to Right     |
| `<`, `<=`, `>`, `>=`              | Relational (less than, less than or equal to, greater than, greater than or equal to) | Left to Right     |
| `==`, `!=`                        | Equality, Inequality                                                                  | Left to Right     |
| `&`                               | Bitwise AND                                                                           | Left to Right     |
| `^`                               | Bitwise XOR                                                                           | Left to Right     |
|                                   | Bitwise OR                                                                            | Left to Right     |
| `&&`                              | Logical AND                                                                           | Left to Right     |
|                                   | Logical OR                                                                            | Left to Right     |
| `?:`                              | Conditional (Ternary) operator                                                        | Right to Left     |
| `=`, `+=`, `-=`, `*=`, `/=`, `%=` | Assignment operators                                                                  | Right to Left     |
| `&`, `&&`                         | Address-of, Logical AND                                                               | Left to Right     |
| `,`                               | Comma (used to separate multiple expressions)                                         | Left to Right     |

---

> This table provides a clear hierarchy of operator precedence and associativity, enabling efficient understanding and usage of expressions in C.

</body>
</html>
