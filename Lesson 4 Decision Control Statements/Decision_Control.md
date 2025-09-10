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
    <a href="#t1">Types of Decision Control Statement</a>
    <a href="#t2">if Statement</a>
    <a href="#t3">if-else Statement</a>
    <a href="#t4">if-else if-else Statement</a>
    <a href="#t5">Nested Statement </a>
    <a href="#t6">Ternary Operator</a>
    <a href="#t7">Switch Statement</a>
    <a href="#t8">Jump Statement</a>
    <a href="#t9">Usage</a>
    <a href="#t10">Keypoints</a>
    
</div>

# <span style="color:#33ff00">Decision Control Statements</span>

- Decision Control Statements are statements used in program language to make decisions, for branching ,for control the flow of execution of statements
- Decision Control Statements allow the execute lines/perform a task when a certain condition is satisfied

## <span style="color:orange" id="t1">Types of Decision Control Statement in C</span>

1. if statement
2. if else statement
3. if-else if-else statement
4. Nested Statements
5. Ternary Operator
6. Switch Statement
7. Jump Statement `goto`

## <span style="color:orange" id="t2">1. if Statement</span>

### <span style="color:pink">Working</span>

- Executes a block of code only if the condition is true
- If the condition evaluates to false, the block is skipped

### <span style="color:pink">Syntax</span>

```c
if (condition) {
    // Code to execute if the condition is true
}
```

### <span style="color:pink" >Special Points</span>

- Condition must evaluate to a non-zero value (truthy) to execute the block
- The condition must be enclosed in parentheses
- No semicolon after the if statement

### <span style="color:pink" >Example</span>

```c
int x = 5;
if (x > 0) {
    printf("x is positive\n");
}
```

## <span style="color:orange" id="t3">2. if-else Statement</span>

### <span style="color:pink">Working</span>

- Executes one block of code if the condition is true and another block if it is false

### <span style="color:pink">Syntax</span>

```c
if (condition) {
    // Code to execute if the condition is true
} else {
    // Code to execute if the condition is false
}
```

### <span style="color:pink">Special Points</span>

- Only one of the two blocks will execute
- The else block is optional

### <span style="color:pink">Example</span>

```c
int x = -1;
if (x > 0) {
    printf("x is positive\n");
} else {
    printf("x is non-positive\n");
}
```

## <span style="color:orange" id="t4">3. if-else if-else Statement</span>

### <span style="color:pink">Working</span>

- Evaluates multiple conditions sequentially
- Executes the first block where the condition evaluates to true. If no condition is true, the else block (if present) is executed

### <span style="color:pink">Syntax</span>

```c
if (condition1) {
    // Code for condition1
} else if (condition2) {
    // Code for condition2
} else {
    // Code if none of the conditions are true
}
```

### <span style="color:pink">Special Points</span>

- Used for multi-way branching
- Only the first true condition's block will execute

### <span style="color:pink">Example</span>

```c
int x = 0;
if (x > 0) {
    printf("x is positive\n");
} else if (x == 0) {
    printf("x is zero\n");
} else {
    printf("x is negative\n");
}
```

## <span style="color:orange" id="t5">4. Nested Statements</span>

### <span style="color:pink">Working</span>

- An if or if-else statement inside another if or if-else statement

### <span style="color:pink">Syntax</span>

```c
if (condition1) {
    if (condition2) {
        // Code for condition1 and condition2
    } else {
        // Code if condition1 is true but condition2 is false
    }
} else {
    // Code if condition1 is false
}
```

### <span style="color:pink">Special Points</span>

- Increases readability complexity, so use carefully
- Best to refactor deeply nested logic into functions

### <span style="color:pink">Example</span>

```c
int x = 5, y = -3;
if (x > 0) {
    if (y > 0) {
        printf("Both x and y are positive\n");
    } else {
        printf("x is positive but y is not\n");
    }
}
```

## <span style="color:orange" id="t6">5. Ternary Operator</span>

### <span style="color:pink">Working</span>

- A compact form of an if-else statement
- It evaluates a condition and returns one of two values

### <span style="color:pink">Syntax</span>

```c
condition ? expr1 : expr2;
```

### <span style="color:pink">Special Points</span>

- Returns the value of expr1 if the condition is true, otherwise expr2
- Cannot execute multiple statements
- Ternary Expressions can be assigned to the variables

### <span style="color:pink">Example</span>

```c
int x = 5;
int result = (x > 0) ? 1 : -1; // result is 1
```

## <span style="color:orange" id="t7">6. switch Statement</span>

### <span style="color:pink">Working</span>

- Tests a variable against multiple constant values and executes the corresponding case

### <span style="color:pink">Syntax</span>

```c
switch (variable) {
    case constant1:
        // Code for constant1
        break;
    case constant2:
        // Code for constant2
        break;
    default:
        // Code if no cases match
}
```

### <span style="color:pink" id="t8">Special Points</span>

- The break statement prevents fall-through (execution of subsequent cases)
- default is optional but recommended
- Variable must be of integer type (or char)

### <span style="color:pink">Example</span>

```c
int x = 2;
switch (x) {
    case 1:
        printf("x is 1\n");
        break;
    case 2:
        printf("x is 2\n");
        break;
    default:
        printf("x is not 1 or 2\n");
}
```

### <span style="color: pink;">Precautions and Rules for Writing switch Statements</span>

#### <span style="color: yellow;">1. Syntax Rules</span>

### Data Type of Expression

- The expression in the switch statement must be of an integral type (int, char, or enum)
- Floating-point types (float, double) are not allowed

```c
switch(x) { // x must be int, char, or enum
    ...
}
```

#### Case Labels Requirements

- Must be compile-time constant expressions
- Must be unique within the same switch block
- default is optional but recommended

```c
case 1:      // Valid
case 10+5:   // Valid
case x:      // Invalid if x is not a constant
case 1:      // Invalid, duplicate label
```

#### <span style="color: yellow;">2. Best Practices and Precautions</span>

#### Use break to Prevent Fall-Through

Example with Fall-Through (Problematic):

```c
int x = 2;
switch(x) {
    case 1:
        printf("One\n");
    case 2:
        printf("Two\n"); // Will execute because there's no break in case 1
}
```

Corrected Version:

```c
int x = 2;
switch(x) {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
}
```

#### <span style="color: yellow;">3. Common Errors to Avoid</span>

#### Unreachable Code

```c
case 1:
    printf("One\n");
    break;
    printf("Unreachable code\n"); // This code will never execute
```

#### Intentional Fall-Through

```c
case 1:
    printf("Case 1\n");
    // Fall-through
case 2:
    printf("Case 2\n");
    break;
```

#### Invalid Type Usage

```c
float x = 1.2;
switch(x) { // Invalid
    case 1.2: break; // Invalid
}
```

#### <span style="color: yellow;">4. When Precedence and Associativity Are Important</span>

```c
switch(a & b) { // Bitwise AND evaluated before switch
    case 0: ...
}
```

### <span style="color: pink;">Summary Table</span>

| Aspect               | Rule/Recommendation                                                   |
| -------------------- | --------------------------------------------------------------------- |
| Expression Data Type | Must be integral (int, char, enum). No float or double.               |
| Case Labels          | Must be constant, unique, and compile-time evaluable.                 |
| Default Case         | Optional but recommended for handling unexpected values.              |
| Break Statement      | Required in each case to prevent fall-through.                        |
| Readable Code        | Keep case labels simple and avoid excessive nesting.                  |
| Handle All Cases     | Include all possible values or a default case.                        |
| Avoid Complex Logic  | Simplify expressions and avoid unreachable code or implicit behavior. |

## <span style="color:orange">7. Jump Statement goto</span>

### <span style="color:pink">Working</span>

- Transfers control to a labeled statement in the program

### <span style="color:pink">Syntax</span>

```c
label_name:
    // Code for the label
goto label_name;
```

### <span style="color:pink">Special Points</span>

- Use sparingly, as it makes the program harder to read and debug
- Often considered bad practice
- `goto` statement can jump control forward and backward also

### <span style="color:pink">Example</span>

```c
int x = 0;
if (x == 0)
    goto error;
printf("This will not print\n");
error:
    printf("An error occurred\n");
```

## <span style="color:orange" id="t9">Usage and Comparison</span>

| Statement         | When to Use                                                            |
| ----------------- | ---------------------------------------------------------------------- |
| if                | When you need to execute a single block of code based on one condition |
| if-else           | When you need to handle true and false conditions differently          |
| if-else if-else   | When multiple conditions must be checked sequentially                  |
| Nested Statements | When logical conditions depend on hierarchical checks                  |
| Ternary Operator  | When you need a compact conditional assignment                         |
| switch            | When you have a variable to test against multiple constant values      |
| goto              | Rarely used; useful in certain error-handling scenarios                |

## <span style="color:orange" id="t10">Key Points</span>

### <span style="color:pink">Best Practices:</span>

- Use if-else or switch statements for clarity
- Avoid goto for general programming
- Use ternary operators only for simple expressions

### <span style="color:pink">Debugging:</span>

- Nested if statements can make debugging difficult
- Use proper indentation for better readability

### <span style="color:pink">Execution Speed:</span>

- switch is generally faster than a series of if-else checks when there are multiple conditions
