# 📘 **ARRAYS IN C — COMPLETE DETAILED NOTES**

---

# 1️⃣ **What is an Array?**

An **array** in C is a **contiguous block of memory** that stores multiple elements **of the same data type** under one name.

Example:

```c
int a[5];
```

Memory layout:

```
a[0] a[1] a[2] a[3] a[4]
 |    |    |    |    |
 contiguous memory
```

---

# 2️⃣ **Declaring Arrays in C**

### Syntax:

```c
datatype arrayName[size];
```

Examples:

```c
int arr[10];
float marks[50];
char name[20];
```

✔ Size **must be a constant expression** in C (for static arrays).
✔ Memory for array is allocated **at compile time** (for static arrays).

---

# 3️⃣ **Initializing Arrays**

### **Full Initialization**

```c
int arr[5] = {1, 2, 3, 4, 5};
```

### **Partial Initialization**

Uninitialized elements become **0**.

```c
int arr[5] = {1, 2};
// arr = {1,2,0,0,0}
```

### **Compiler Counts Size Automatically**

```c
int arr[] = {10, 20, 30};
// size = 3
```

### **String Initialization**

```c
char name[] = "Arjun";
```

Includes **'\0'** null terminator.

---

# 4️⃣ **Memory Layout of Arrays**

Arrays in C are stored in **contiguous memory**.

Example:

```c
int a[4];
```

If `a` starts at address 1000:

| Element | Address |
| ------- | ------- |
| a[0]    | 1000    |
| a[1]    | 1004    |
| a[2]    | 1008    |
| a[3]    | 1012    |

Because `sizeof(int) = 4`.

---

# 5️⃣ **Accessing Array Elements**

### Syntax:

```c
arr[index];
```

### Index starts from 0.

**Important**: C does **NOT** check bounds.
So:

```c
arr[10]   // if arr has size 5 → UNDEFINED BEHAVIOR
```

This causes:

- memory corruption
- segmentation faults
- overwriting other variables

---

# 6️⃣ **Preventing Memory Corruption / Illegal Access**

### (1) Always check array bounds

```c
if (index >= 0 && index < size)
    arr[index] = value;
```

### (2) Avoid using uninitialized arrays

Always initialize:

```c
int arr[10] = {0};
```

### (3) Use const where modification is not needed

```c
void print(const int arr[], int n);
```

### (4) Avoid returning local arrays (explained later)

### (5) Do NOT access negative indices

`arr[-1]` is illegal.

### (6) Prefer sentinel values or limits to prevent overflow

For strings:

```c
char name[20];
fgets(name, sizeof(name), stdin);
```

---

# 7️⃣ **Array Decay to Pointer (VERY IMPORTANT)**

### **Rule:**

In most expressions, the array name **decays** to a

```
pointer to its first element
```

Example:

```c
int a[5];
printf("%p", a);
printf("%p", &a[0]);
```

Both print the **same address**.

### But:

`sizeof(a)` = **total size of array**
`sizeof(a[0])` = size of one element

Inside a function (after decay):
`sizeof(arr)` gives size of pointer, NOT array.

---

# 8️⃣ **Why Does Decay Happen?**

Arrays **cannot be passed by value** in C.
They are **not copyable objects**.

So the compiler automatically converts:

```
int arr[10]
```

to

```
int* arr
```

when passed to a function.

---

# 9️⃣ **Passing Arrays to Functions (Important)**

### Function definition:

```c
void fun(int arr[], int n)
{
    arr[0] = 100; // modifies original array
}
```

### Call:

```c
int a[5] = {1,2,3,4,5};
fun(a, 5);
```

✔ `a` decays to `int*`
✔ `arr` inside function points to the same memory
✔ Modifications inside function affect original array.

This **feels like pass-by-reference**, but actually:

- C uses **pass-by-value**,
- but the **value passed is the pointer address**.

---

# 🔟 **Pass-by-Value Mechanism (Exact Explanation)**

You ARE passing by value, because:

- The **pointer itself** is passed by value.
- But the pointer **points to original array**.

Thus:

```c
arr[0] = 50;     // modifies real array
arr = something; // modifies only the pointer copy, not caller's pointer
```

---

# 1️⃣1️⃣ **Can We Return an Array From a Function?**

### ✔ You can return a **pointer**

You CANNOT return an **array value**, but you can return:

### (a) **Pointer to dynamically allocated array**

Works:

```c
int* fun() {
    int *ptr = malloc(5 * sizeof(int));
    return ptr;
}
```

### (b) **Static array**

Works, but risky:

```c
int* fun() {
    static int a[5];
    return a;  // OK
}
```

### (c) **Local array**

❌ ILLEGAL — DO NOT RETURN

```c
int* fun() {
    int a[5];  // local memory
    return a;  // invalid → memory gone after function ends
}
```

---

# 1️⃣2️⃣ **Common Mistakes with Arrays in C**

### ❌ Out-of-bounds access

### ❌ Using uninitialized arrays

### ❌ Returning local arrays

### ❌ Using sizeof incorrectly inside functions

### ❌ Forgetting null terminator in strings

### ❌ Mixing pointer arithmetic incorrectly

---

# 1️⃣3️⃣ **Pointers and Arrays Relationship**

### `arr` → address of first element

### `arr + 1` → address of second element

### `*(arr + i)` → same as `arr[i]`

### `&arr` → pointer to entire array (different type)

Example:

```c
int a[5];
int *p = a;      // OK
int (*q)[5] = &a; // pointer to array
```

---

# 1️⃣4️⃣ **Multidimensional Arrays**

Declaration:

```c
int a[3][4];
```

Initialization:

```c
int a[2][3] = {
    {1,2,3},
    {4,5,6}
};
```

Decay:

- `a` decays to pointer to array of 3 ints → `int (*)[3]`

---

# 📌 FINAL SUMMARY (SUPER CRISP)

- Arrays store **same-type elements in contiguous memory**
- Array name often **decays to pointer to first element**
- Arrays **cannot be passed by value**
- Passing an array to a function passes a **pointer**
- Array size is lost after decay (use extra parameter)
- You **cannot return local arrays**
- You _can_ return:

  - dynamic arrays
  - static arrays
  - pointers

---
