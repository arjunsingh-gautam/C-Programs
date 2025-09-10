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
    <a href="#t1">While Loop</a>
    <a href="#t2">For Loop</a>
    <a href="#t3">Do While Loop</a>
    <a href="#t4">Loop Comparison</a>
    <a href="#t5">Break and Continue keyword </a>
</div>

# <span style="color: orange;">Iterative Control Statements in C</span>

## <span style="color: pink;" id="t1">1. While Loop</span>

### Syntax

```c
while (condition) {
    // Code to execute
}
```

### Working

- The condition is evaluated first
- If the condition is true, the loop body is executed
- After executing the body, the condition is checked again
- The loop stops when the condition becomes false

### Example

```c
int i = 1;
while (i <= 5) {
    printf("%d ", i);
    i++;
}
// Output: 1 2 3 4 5
```

## <span style="color: pink;" id="t2">2. For Loop</span>

### Syntax

```c
for (initialization; condition; increment/decrement) {
    // Code to execute
}
```

### Working

- The initialization runs once at the start
- The condition is checked before each iteration
- If true, the loop body is executed, then increment/decrement is performed
- The loop stops when the condition becomes false

### Example

```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
// Output: 1 2 3 4 5
```

## <span style="color: pink;" id="t3">3. Do-While Loop</span>

### Syntax

```c
do {
    // Code to execute
} while (condition);
```

### Working

- The loop body is executed at least once
- After execution, the condition is checked
- If the condition is true, the loop repeats; otherwise, it stops

### Example

```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while (i <= 5);
// Output: 1 2 3 4 5
```

## <span style="color: pink;" id="t4">Loop Comparison Table</span>

| Feature              | While Loop            | For Loop               | Do-While Loop          |
| -------------------- | --------------------- | ---------------------- | ---------------------- |
| Condition Check      | Before each iteration | Before each iteration  | After each iteration   |
| Guarantees Execution | No                    | No                     | Yes (at least once)    |
| Initialization       | Outside the loop      | Inside the loop header | Outside the loop       |
| Use Case             | Unknown iterations    | Known iterations       | Must run at least once |

## <span style="color: pink;" id="t5">Break and Continue Keywords</span>

### Break

```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) break;
    printf("%d ", i);
}
// Output: 1 2
```

### Continue

```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    printf("%d ", i);
}
// Output: 1 2 4 5
```

## <span style="color: orange;">Summary Table</span>

| Keyword    | Function                 | Use Case                                      | Example Behavior                   |
| ---------- | ------------------------ | --------------------------------------------- | ---------------------------------- |
| `break`    | Exits the loop or switch | Terminate loops or switch when needed         | Exit loop on a condition           |
| `continue` | Skips current iteration  | Skip specific iterations and continue looping | Skip a conditionally unwanted part |

</body>
</html>
