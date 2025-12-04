# <span style="color:orange"> **Recursion in C**</span>

# ✅ **1. What is Recursion?**

**Recursion = A function calling itself to solve a smaller version of the same problem.**

### Simple Analogy

Imagine you have **10 books** stacked. You want the **last book** at the bottom.

You tell your friend:

- “Take the top book and hand me the rest.”
  Your friend does the same thing again and again…
  Finally, when only 1 book remains, he gives it to you.

This is recursion → repeatedly solving a smaller version until the smallest case is reached.

---

# ✅ **2. What is a Stack? What are Stack Frames?**

### **STACK**

A stack is a memory area that works on **LIFO = Last In First Out**.

### **STACK FRAME**

Whenever a function is called, a **stack frame** is created that stores:

- parameters passed to the function
- function’s local variables
- return address (where to return after function finishes)

When the function returns → that **stack frame is destroyed**.

### **During Recursion**

Each recursive call creates a **new stack frame**.

Example recursion call:

```cpp
fun(3)
  -> fun(2)
      -> fun(1)
         -> fun(0)
```

Stack grows downward:

```
| fun(3) frame |
| fun(2) frame |
| fun(1) frame |
| fun(0) frame |  <-- top of stack
```

When base case is hit → frames start destroying (returning back upward).

---

# ✅ **3. How to Visualize and Solve Recursive Problems**

Always think in 3 steps:

---

## ⭐ Step 1: Define the **Problem in terms of a smaller problem**

Example: factorial(n) = n × factorial(n-1)

---

## ⭐ Step 2: Identify the **Base Case**

This is where recursion **stops**.

Example:
factorial(0) = 1

---

## ⭐ Step 3: Trust the recursion

Do NOT think the whole execution — just trust that:

- factorial(n-1) will give correct answer
- you only combine it for current step

This is called the **recursive leap of faith**.

---

# 🟦 Example: Factorial Visualisation

```cpp
int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}
```

### Stack frames:

fact(3)

- waiting for fact(2)

fact(2)

- waiting for fact(1)

fact(1)

- waiting for fact(0)

fact(0)

- returns 1 → frame destroyed
  fact(1) returns 1 × 1 = 1 → destroyed
  fact(2) returns 2 × 1 = 2 → destroyed
  fact(3) returns 3 × 2 = 6 → destroyed

---

# ⭐ TYPES OF RECURSION

---

# ✅ **4. Tail Recursion**

**When the recursive call is the LAST statement executed**
→ no pending operations after recursive call
→ compiler can optimize (convert to loop)

### Example (Tail Recursion)

```cpp
void fun(int n){
    if(n == 0) return;
    cout << n << " ";
    fun(n-1);   // last operation → tail recursive
}
```

### Analogy

You say:

- “Say the number and immediately call the next person.”
  You don’t do anything after calling the next person.

### Output

`5 4 3 2 1`

---

# ❌ **5. Non-Tail Recursion**

If the function still has to do work **after** the recursive call,
it is **non-tail** (more stack space needed).

### Example (Non-Tail)

```cpp
int fun(int n){
    if(n == 0) return 0;
    return n + fun(n-1);   // + n is done AFTER recursion → non-tail
}
```

Analogy:
You say:

- “Call the next person, get their answer, **then** add your number to it.”

Work happens AFTER recursive call → non-tail.

---

# ✅ **6. Direct Recursion**

A function calls **itself directly**.

### Example

```cpp
void A(){
    A();   // direct recursive call
}
```

---

# ✅ **7. Indirect Recursion**

Function A calls B,
B calls A.

### Example

```cpp
void A(int n){
    if(n <= 0) return;
    cout << n << " ";
    B(n - 1);
}

void B(int n){
    if(n <= 0) return;
    cout << n << " ";
    A(n / 2);
}
```

Call chain:
A → B → A → B → …

---

# ⭐ SIMPLE ANALOGIES FOR EACH TYPE

| Type     | Analogy                                                      | Example                     |
| -------- | ------------------------------------------------------------ | --------------------------- |
| Tail     | Giving all tasks to next person without doing anything later | printing numbers decreasing |
| Non-Tail | Tell next person, but after they finish, you add extra work  | factorial, fibonacci        |
| Direct   | You ask yourself a question repeatedly                       | factorial                   |
| Indirect | A tells B, B tells A                                         | even/odd check              |

---

# 🟩 Examples of Each (Simple)

### 1️⃣ Tail Recursive: Count down

```cpp
void countdown(int n){
    if(n == 0) return;
    cout << n << " ";
    countdown(n-1);
}
```

---

### 2️⃣ Non-Tail: Sum of numbers

```cpp
int sum(int n){
    if(n == 0) return 0;
    return n + sum(n-1);
}
```

---

### 3️⃣ Direct Recursion

```cpp
int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}
```

---

### 4️⃣ Indirect Recursion

```cpp
bool isEven(int n){
    if(n == 0) return true;
    return isOdd(n-1);
}

bool isOdd(int n){
    if(n == 0) return false;
    return isEven(n-1);
}
```

---

# ⭐ How to Practise Visualising Recursion (VERY IMPORTANT)

Use these steps:

### Step 1: Write the recursive calls in tree form

Example: Fibonacci

```
fib(4)
 ├─ fib(3)
 │   ├─ fib(2)
 │   └─ fib(1)
 └─ fib(2)
     ├─ fib(1)
     └─ fib(0)
```

### Step 2: Draw stack for a simple input (like n=3)

### Step 3: Identify:

- base case
- smaller problem
- combination step

### Step 4: Dry run manually (2–3 levels)

### Step 5: Try converting recursion → iteration (helps debugging)

---
