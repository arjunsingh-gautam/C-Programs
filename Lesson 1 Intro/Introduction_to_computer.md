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
    <a href="#t1">What is Computer?</a>
    <a href="#t2">How Memory is stored in computers?</a>
    <a href="#t3">What is Hardware?</a>
    <a href="#t4">Types of Software</a>
    <a href="#t5">How a .exe file executed in computer?</a>
    <a href="#t6">Programming Languages</a>
    <a href="#t7">Complete Execution and Hardware Mechanics of a C Program</a>
    <a href="#t8">Parsing</a>
    <a href="#t9">Macros</a>
</div>

# <span style="color:#33ff00">Introduction to Programming and Computer Fundamentals</span>

## <span style="color:orange" id="t1">What is Computer?</span>

- <u>A computer is an electronic device that processes and stores data according to a set of instructions called a program.</u>
- It consists of various hardware components, including a **central processing unit (CPU)**, **memory (RAM)**, **storage devices (such as hard drives or solid-state drives)**, input devices (such as keyboards and mice), **output devices (such as monitors and printers)**, and various other peripherals.

- <u>Computers operate on the principle of binary logic, representing data and instructions in the form of binary digits (0s and 1s).</u> The CPU carries out arithmetic and logical operations on this data based on the instructions provided by the program. The memory stores both the program instructions and the data being processed.

## <span style="color:orange" id="t2">How Memory is stored in computers?</span>

- In a computer, memory is stored in the form of binary digits, represented by 0s and 1s. The basic unit of memory is a binary digit, also known as a "bit." A bit can represent two states: 0 or 1.

- Memory is organized into larger units called "bytes." A byte consists of 8 bits and can represent 256 (2^8) different values, ranging from 0 to 255. Bytes are typically used as the fundamental unit of storage and addressable memory in most computer systems.

> To store information using 0s and 1s, memory cells or circuits are employed. These memory cells can be in one of two states, often referred to as "high" or "low," "on" or "off," or "1" or "0." The state of a memory cell represents the binary value being stored.

There are several types of memory used in computers, including:

1. **Random Access Memory (RAM)**: <u>RAM is a type of volatile memory used for temporary data storage during program execution.</u> It allows for fast read and write operations. Each memory cell in RAM can be set to store a 0 or 1 based on the electrical charge it holds.
2. **Read-Only Memory (ROM):** <u>ROM is non-volatile memory that retains its data even when the computer is powered off.</u> It contains permanent instructions or data that are not typically modified. The data in ROM is encoded during manufacturing and cannot be changed by normal computer operations.
3. **Hard Disk Drives (HDD) and Solid-State Drives (SSD):** <u> These are non-volatile storage devices used for long-term data storage.</u> They use magnetic or electronic circuits to represent and store binary data. Information is stored in sectors and blocks on the disk or flash memory cells in an SSD.

## <span style="color:orange" id="t3">What is Hardware?</span>

- Hardware refers to the physical components of a computer system or any electronic device. It encompasses all the tangible parts that you can touch and see. Hardware provides the infrastructure and resources necessary for a computer system to function.

## <span style="color:orange">What is a File?</span>

- In computing, a file is a named collection of
  related data that is stored on a storage medium, such as a hard drive or solid-state drive. A file can contain various types of information, including text, images, audio, video, programs, and more.

## <span style="color:orange" id="t4">Software</span>

### <span style="color:pink">**What is Software? (With a Simple Analogy)**</span>

Software is a set of instructions, data, or programs used to operate computers and execute specific tasks. It is the **intangible** component of a computer system, unlike hardware, which refers to the **physical** components.

#### **Analogy: Software is Like a Recipe**

Imagine you are cooking a dish:

- **Hardware** (Physical Components) → The stove, utensils, ingredients, and pan.
- **Software** (Instructions & Logic) → The recipe that tells you what to do step by step.

Just as a recipe guides you on how to combine ingredients in the right order to prepare a meal, software tells the computer how to process data and perform tasks.

---

### <span style="color:pink">**Types of Software**</span>

1. **System Software** (Like the Kitchen Setup)

   - This includes the **Operating System (OS)** (Windows, macOS, Linux) and other utilities that manage hardware resources.
   - Just like a **kitchen setup** (stove, sink, cutting board) enables you to cook efficiently, the OS enables applications to run smoothly on a computer.

2. **Application Software** (Like Specific Recipes)

   - These are programs used for specific tasks, like browsers, games, or word processors.
   - Just like a **recipe for pizza or pasta**, application software performs specific tasks like browsing the web or editing documents.

3. **Programming Software** (Like a Chef Training Manual)

   - These include tools like compilers, text editors, and debuggers that help developers write code.
   - Just like a **manual teaches a chef how to cook and create new recipes**, programming software helps developers write new applications.

4. **Middleware** (Like a Translator)
   - Middleware helps different software communicate with each other.
   - Just like a **waiter translates orders between customers and the kitchen**, middleware ensures different programs work together smoothly.

---

### **How Software Works in Simple Steps**

1. **User Input** → You click a button or type a command.
2. **Processing** → The software follows predefined logic to process your input.
3. **Output** → You see results on the screen or hear a response.

For example, when you open a web browser and type "www.google.com":

- The **browser software** sends a request to Google's servers.
- The **network software** ensures the request is delivered correctly.
- The **Google server software** processes your request and sends back the webpage data.
- The browser **renders the webpage** so you can see and interact with it.

---

### **Conclusion**

Software is the **brain** behind every digital device. It guides hardware on what to do, just like a **recipe guides a chef**. Without software, a computer is just a useless box of metal and plastic! 🚀

## <span style="color:orange">Application Software</span>

- Application software refers to programs and software applications designed to perform specific tasks or provide specific functionalities for end-users. These applications are developed to meet various needs, such as word processing, spreadsheets, graphic design, web browsing, email, gaming, and more. Application software interacts directly with users and enables them to perform specific functions or tasks on a computer or other electronic devices.

## <span style="color:orange">System Software</span>

- System software is a collection of programs that provide essential services and functionality to support the operation of a computer system. It acts as an intermediary between application software and the computer hardware. System software includes operating systems, device drivers, utilities, and other software components required to manage and control the hardware resources of a computer. It provides a platform for running application software and facilitates the execution of various tasks.

## <span style="color:orange">Operating System</span>

- An operating system (OS) is a type of system software that manages computer hardware and software resources and provides common services for computer programs.
  > It acts as an interface between the user and the computer hardware, allowing users to interact with the system and execute applications.
- The operating system handles tasks such as memory management, process management, file system management, device management, and user interface management.

- The operating system provides a platform for running application software and ensures the efficient utilization of hardware resources.
- It abstracts the complexities of the underlying hardware and provides a standardized environment for software development. Examples of operating systems include Microsoft Windows, macOS, Linux, Android, and iOS.

![Operating System](data:image/jpeg;base64,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)

## <span style="color:orange" id="t5">How a .exe file executed in computer?</span>

1. **Loading the Executable**: When you double-click on an executable file or run it from the command line, the operating system (OS) first loads the file into memory. The executable file contains machine code, which is a series of instructions that the CPU can understand and execute.
2. **File Header**: The OS reads the file header, which contains essential information about the executable, such as the **<span style="color:red">architecture it was compiled for, memory requirements, and entry point address</span>**.
3. **Memory Allocation**: The OS allocates the necessary memory space for the executable to run. This includes allocating memory for the program's code, data, stack, and heap.
4. **Setting up the Stack**: The OS sets up the stack, which is used to manage function calls and local variables. It creates a stack frame for the main function or the entry point of the executable.
5. **Initializing Variables**: The OS initializes global and static variables to their default values if necessary.
6. **Start Execution**: The OS transfers control to the entry point of the executable. The entry point is usually the main function in most programming languages.
7. **Execution of Instructions**: The CPU begins executing the machine code instructions one by one, starting with the first instruction at the entry point. These instructions perform various tasks, such as arithmetic operations, data manipulation, and control flow.
8. **Interacting with the OS**: During execution, the program may need to interact with the operating system for tasks such as file I/O, network communication, or accessing hardware resources. It does so by making system calls or using libraries that facilitate these interactions.
9. **Termination**: When the program completes its tasks, it reaches the end of the main function or encounters a specific exit instruction. At this point, the program exits, and the OS releases the allocated memory and resources used by the executable.
10. **Cleanup and Closing**: The OS may perform some cleanup tasks, close any open file handles, release memory, and return control to the user or parent process.

## <span style="color:orange">How a .exe file is build from source file ?</span>

### What goes inside the compilation process?

- A compiler converts a C program into an executable. There are four phases for a C program to become an executable:

1. Pre-processing
2. Compilation
3. Assembly
4. Linking

![Build](https://media.geeksforgeeks.org/wp-content/uploads/20230404112946/Compilation-Process-in-C.png)

## <span style="color:orange">1. Pre-Processing</span>

This is the first phase through which source code is passed. This phase includes:

1. **Removal of Comments**
2. **Expansion of Macros**

- Definition: Macros are defined using #define in C, allowing for text substitution in the source code.
- What happens: During preprocessing, the preprocessor replaces occurrences of macro names with their defined values or expressions.
- Example:

```C
#define PI 3.14
//In the code:
float area = PI * r * r;
//The preprocessor replaces PI with 3.14, so the code becomes:
float area = 3.14 * r * r;
```

3. **Expansion of the included files.**

- Definition: Header files are files that contain declarations of functions, macros, and data types. They are included in C programs using #include.
- What happens: The preprocessor looks for #include directives and copies the contents of the specified header files into the source code at the point where they are included.
- Example:

```C
#include <stdio.h>
```

> This tells the preprocessor to include the contents of the standard input/output library (like function prototypes for printf, scanf, etc.) in your program.

4.  **Conditional compilation**

- Definition: Conditional compilation uses preprocessor directives like `#if, #else, #elif, and #endif` to include or exclude parts of code based on certain conditions (e.g., platform-specific code).
- What happens: The preprocessor evaluates the conditions and either includes or excludes the corresponding sections of the code.
- Example:

```c
#ifdef DEBUG
  printf("Debugging information\n");
#endif
```

- If DEBUG is defined (e.g., #define DEBUG), the printf statement will be included in the compiled code.
- If DEBUG is not defined, the code inside the #ifdef block is excluded.

> The preprocessed output is stored in the **filename.i**.

```bash
 gcc -E macro.c -o macro.i
```

## <span style="color:orange">2. Compiling</span>

- The next step is to <u>compile filename.i and produce an; intermediate compiled output file **filename.s**. </u>
- This file is in assembly-level instructions.

```bash
gcc -S your_file.i -o your_file.s
```

## <span style="color:orange">3. Assembly</span>

- In this phase the filename.s is taken as input and turned into **filename.o** by the assembler.
- This file contains machine-level instructions.
- At this phase, only existing code is converted into machine language, and the <u>function calls like printf() are not resolved.</u>

## <span style="color:orange">4. Linking</span>

- This is the final phase in which all the linking of function calls with their definitions is done.
- Linker knows where all these functions are implemented.
- Linker does some extra work also, it adds some extra code to our program which is required when the program starts and ends.
- Linker converts filename.o to **filename.exe**

| Stage         | Input    | Output     | GCC Command               |
| ------------- | -------- | ---------- | ------------------------- |
| Preprocessing | `file.c` | `file.i`   | `gcc -E file.c -o file.i` |
| Compilation   | `file.i` | `file.s`   | `gcc -S file.i -o file.s` |
| Assembly      | `file.s` | `file.o`   | `gcc -c file.s -o file.o` |
| Linking       | `file.o` | Executable | `gcc file.o -o output`    |

## <span style="color:orange">Why we need Software?</span>

1. **Code Execution:**
   Programmers use software as a platform to execute their code, turning their instructions into actions that a computer can understand and perform. This is fundamental to programming because it enables the creation of applications, scripts, and systems that can automate tasks and processes.
2. **Problem Solving and Solution Implementation:**
   Programmers use software as a tool to implement solutions to real-world problems. Software applications are designed to address specific needs or challenges, providing practical solutions in various domains.

## <span style="color:orange">What is Programming?</span>

> Programming is way to use and manipulate data to solve a particular problem using a computer

## <span style="color:orange" id="t6"> Programming Language</span>

> Programming languages serve as an intermediary between human-readable code and the machine code that a computer's central processing unit (CPU) can execute.
>
> > It help us to communicate instructions to computer to solve a problem

## <span style="color:orange"> Machine Language</span>

> Machine language, also known as machine code, is the lowest-level programming language that directly represents instructions executed by a computer's central processing unit (CPU).

- Machine language is specific to the architecture of a particular computer or processor.

- **Binary Representation:** Machine language instructions are represented using binary code, consisting of sequences of 0s and 1s. Each combination of bits corresponds to a specific operation that the CPU can perform.

- **Platform-Specific:** Machine language is highly platform-specific. Programs written in machine language are tailored to a particular CPU or computer architecture, making them non-portable across different systems.

- **Example:**

#### <span style="color: orange;">Machine Language: The Lowest-Level Programming Language</span>

Machine language, also known as machine code, is the lowest-level programming language, consisting of binary (0s and 1s) instructions that a computer's processor can directly execute. Each processor architecture (like x86, ARM) has its own specific machine language.

---

##### <span style="color: pink;">Example: Adding Two Numbers</span>

Assume we want to add two numbers, 5 and 3, and store the result in a memory location.

**Assembly Code (for a hypothetical processor):**

```asm
LOAD 5      ; Load the value 5 into the accumulator
ADD 3       ; Add the value 3 to the accumulator
STORE 10    ; Store the result into memory location 10
```

##### Corresponding Machine Code (in binary):

- Instruction 1: LOAD 5

  - Suppose the opcode for LOAD is 0001, and 5 is represented as 0101.
    Machine code: 0001 0101
    (This means load the number 5 into the accumulator.)

- Instruction 2: ADD 3

  - Suppose the opcode for ADD is 0010, and 3 is represented as 0011.
    Machine code: 0010 0011
    (This means add 3 to the accumulator.)

- 3: STORE 10
  - Suppose the opcode for STORE is 0011, and 10 is represented as 1010.
    Machine code: 0011 1010
    (This means store the result into memory location 10.)

```asm
0001 0101   ; LOAD 5
0010 0011   ; ADD 3
0011 1010   ; STORE 10
```

#### <span style="color: pink;">Explanation:</span>

- **Opcode:** The binary values at the beginning of each instruction (e.g., `0001` for `LOAD`, `0010` for `ADD`) represent the operation that the processor should perform.
- **Operand:** The remaining binary values (e.g., `0101` for 5, `0011` for 3) specify the values or memory addresses involved in the operation.

---

#### <span style="color: pink;">Machine Code Details:</span>

- The exact format of machine language depends on the architecture (e.g., x86, ARM).
- Real-world machine code for modern processors is much more complex, involving instructions for controlling the processor’s registers, memory, and other hardware components.
- Modern machine languages use instructions like `MOV`, `ADD`, `SUB`, `JMP`, `CMP`, etc., in assembly, which are then translated into binary machine code for execution.

## <span style="color:orange"> Assembly Language</span>

> Assembly language is a low-level programming language that is a step above machine language. It uses symbolic representations of machine code instructions.

- **Symbolic Representation:** Instead of binary code, assembly language uses mnemonic codes (abbreviations) for machine instructions. For example, "MOV" might represent a move operation.

- **One-to-One Correspondence:** Each assembly language instruction typically corresponds to one machine language instruction. It provides a more human-readable way to program at the machine level.

- **Platform-Specific:** Like machine language, assembly language is platform-specific. Programs written in assembly are closely tied to the architecture of a particular CPU or computer.

- **Direct Access to Hardware:** Assembly language allows for direct manipulation of hardware resources and provides fine-grained control over a computer's architecture.

- **Limited Abstraction:** While higher than machine language in terms of readability, assembly language still involves understanding the architecture of the machine and working with registers and memory locations.
- **Example:**

#### <span style="color: pink;"> Assembly code to Add two Numbers</span>

```asm
section .data
    num1 db 5       ; Declare num1 and initialize it with 5
    num2 db 3       ; Declare num2 and initialize it with 3
    result db 0     ; Declare result with initial value 0

section .text
    global _start   ; Define entry point for the program

_start:
    ; Load the value of num1 into AL register
    mov al, [num1]

    ; Add the value of num2 to AL register
    add al, [num2]

    ; Store the result into the result variable
    mov [result], al

    ; Exit the program
    mov eax, 1       ; System call number for exit
    xor ebx, ebx     ; Return 0 status code
    int 0x80         ; Interrupt to invoke the system call
```

#### <span style="color: pink;">Explanation of the Code:</span>

---

**Data Section (section .data):**

- `num1 db 5:` A byte variable `num1` is declared and initialized to 5.
- `num2 db 3:` A byte variable `num2` is declared and initialized to 3.
- `result db 0:` A byte variable `result` is declared and initialized to 0. This will store the result of the addition.

---

**Text Section (section .text):**

- `global _start:` This defines the entry point of the program, where execution begins.
- `_start:` This is where the program starts executing.

---

**Instructions:**

1. `mov al, [num1]:` This instruction moves the value of `num1` into the `AL` register (the lower 8 bits of the `EAX` register).
2. `add al, [num2]:` Adds the value of `num2` to the `AL` register.
3. `mov [result], al:` Stores the value in the `AL` register into the `result` variable.

---

**Exit System Call:**

1. `mov eax, 1:` The `eax` register is set to 1, which is the system call number for exiting a program in Linux.
2. `xor ebx, ebx:` Clears the `ebx` register (sets it to 0), which is the exit status code (i.e., 0 means success).
3. `int 0x80:` This triggers an interrupt that invokes the Linux kernel to perform the exit system call.

---

**Result:**

- The values of `num1` (5) and `num2` (3) are added together, resulting in `8`, which is then stored in `result`.

---

#### <span style="color: pink;">Assembly Language Details:</span>

1. **Registers:** The program uses the `AL` register, which is the lower 8 bits of the `EAX` register, for holding intermediate results.
2. **System Call:** This example uses a system call to exit the program by invoking the Linux kernel with `int 0x80`.
3. **Syntax:** The example follows Intel syntax where the destination operand appears before the source operand (e.g., `mov al, [num1]`).

## <span style="color:orange"> High Level Language</span>

> Abstraction: High-level languages provide a higher level of abstraction, making it easier for programmers to write code without dealing with the details of the computer's architecture.

- **English-Like Syntax:** High-level languages use syntax that is closer to human language, making it more readable and understandable. Examples include Python, Java, C++, and JavaScript.

- **Portability:** Code written in a high-level language is generally more portable across different platforms. It is not tied to the specifics of a particular CPU or architecture.

- **Increased Productivity:** High-level languages offer built-in functions, libraries, and frameworks that simplify complex operations. This leads to increased productivity for developers.

- **Platform Independence:** Programs written in high-level languages are often compiled or interpreted by a separate software layer (compiler or interpreter), allowing them to run on different platforms without modification.

- **Memory Management:** High-level languages often include automatic memory management, reducing the likelihood of memory-related errors like leaks or corruption.

- Examples: Python, Java, C++, C#, and Ruby are examples of high-level programming languages.

</body>
</html>

## <span style="color:orange" id="t7">Complete Execution and Hardware Mechanics of a C Program</span>

```C
#include<stdio.h>
int main()
{
int a,b;
scanf("%d\n%d",&a,&b);
printf("%d",a);
return 0;
}
```

### <span style="color: pink;">1. Compilation Stage</span>

The source code undergoes several steps during compilation:

#### <span style="color: yellow">a. Preprocessing</span>

- The preprocessor handles `#include<stdio.h>`.
- The `<stdio.h>` header file is included, bringing declarations for functions like `scanf` and `printf`.
- Comments (if any) and macros are processed.
- The output of preprocessing is a pure C code file.

#### <span style="color: yellow">b. Compilation</span>

- The compiler translates the preprocessed code into assembly language.
  - For example:
    - The `scanf` and `printf` function calls are mapped to their assembly equivalents.
    - Variable declarations like `int a, b;` are assigned stack memory offsets.

#### <span style="color: yellow">c. Assembly</span>

- The assembler converts the assembly code into machine code (object file).
- Machine instructions for operations like input/output and arithmetic are generated.

#### <span style="color: yellow">d. Linking</span>

- The linker resolves external references (e.g., `scanf` and `printf`) by linking with the C Standard Library (e.g., `glibc` on Linux).
- The final executable is created, combining your code and the library functions.

---

### <span style="color: pink">2. Loading the Program into Memory</span>

When the program is executed:

- The operating system (OS) loader loads the executable into memory.
- Memory layout is set up:
  - **Code segment:** Contains machine instructions for the program.
  - **Data segment:** Stores initialized global and static variables.
  - **BSS segment:** Stores uninitialized global and static variables.
  - **Heap:** Used for dynamic memory allocation.
  - **Stack:** Used for local variables and function calls.

---

### <span style="color: pink">3. Execution Mechanics</span>

#### <span style="color: yellow">a. Program Start</span>

- The OS transfers control to the `main()` function of the program.
- The stack frame for `main()` is created:
  - Space is allocated for `int a` and `int b` on the stack.

#### <span style="color: yellow">b. Execution of Code</span>

#### `scanf("%d\n%d", &a, &b);`

- **System Call for Input:**
  - `scanf` uses the system call `read` to read data from standard input (keyboard).
  - The `%d` format specifier directs the function to parse integers from input and store them in the memory locations of `a` and `b`.
- **Parsing Input:**
  - Input is processed character by character.
  - The newline (`\n`) specifier causes `scanf` to wait for the Enter key.
- **Memory Update:**
  - The integers entered are stored at the memory addresses corresponding to `a` and `b`.

#### `printf("%d", a);`

- **System Call for Output:**
  - `printf` formats the integer `a` and uses the `write` system call to send data to standard output (screen).
- **Processor Role:**
  - The processor converts the binary representation of `a` into its ASCII equivalent for display.

#### <span style="color: yellow">c. Return</span>

- `return 0;`
  - The program signals the OS that it has executed successfully.
  - The stack frame for `main()` is deallocated.

---

### <span style="color: pink;">4. Role of the Processor</span>

The processor executes machine instructions fetched from memory:

- **Instruction Fetch:** Reads the next instruction from the code segment.
- **Instruction Decode:** Deciphers what the instruction does (e.g., addition, input/output).
- **Execution:**
  - **Arithmetic and Logic Unit (ALU):** Handles calculations.
  - **Control Unit:** Coordinates input/output and memory accesses.
- **Memory Access:** Loads or stores data in RAM, as directed by the instruction.

---

### <span style="color: pink;">5. Memory Management</span>

- The stack grows and shrinks as functions are called and return.
- The heap is not used in this program (no `malloc` or `calloc`).
- **Registers:** Temporary data (like values of `a` and `b`) is often stored in processor registers for fast access.
- **Virtual Memory:** The OS maps virtual addresses to physical RAM, ensuring isolation and security.

---

### <span style="color: pink;">6. System Calls</span>

- **Input (`scanf`):**
  - The program invokes a system call to read data from standard input.
  - The OS kernel interacts with the hardware (keyboard) to get the input.
- **Output (`printf`):**
  - A system call writes data to standard output.
  - The OS kernel sends data to the display device.

---

## <span style="color:orange" id="t8">Parsing while taking input</span>

<span style="color: orange;">Parsing in C: Understanding the Process</span>

> Parsing refers to the process of analyzing a string of input data to extract meaningful information in a structured and usable format. In the context of taking input in C (like with `scanf`), parsing involves:

---

### <span style="color: pink;">Steps in Parsing Input</span>

1. **Reading the Raw Data:**

   - The program reads a sequence of characters from the input (e.g., keyboard or file).
   - These characters are stored in an input buffer, managed by the standard library or the OS.

2. **Interpreting the Data According to a Format:**

   - The function (e.g., `scanf`) checks the format specifier (`%d`, `%f`, etc.) to understand what type of data is expected:
     - `%d`: Integer
     - `%f`: Floating-point number
     - `%s`: String
   - The function converts the input string into the required data type based on these format specifiers.

3. **Storing the Parsed Data:**
   - The parsed data is stored in the memory address provided as arguments (e.g., `&a` and `&b` for `scanf`).

---

### <span style="color: pink;">Example of Parsing in `scanf`</span>

- Suppose the input is:

```c
5
```

- Code is:

```C
int a;
scanf("%d", &a);
```

### <span style="color: pink;">What Happens Internally:</span>

1. **Read Input:**

   - The raw input `"5"` (a sequence of characters) is stored in an input buffer.

2. **Parse the Input:**

   - The `scanf` function recognizes the `%d` format specifier and parses `"5"` as an integer:
     - It checks each character to see if it is a valid digit (`'5'`).
     - It converts the ASCII character `'5'` (ASCII value 53) into the integer `5`.

3. **Store the Result:**
   - The integer `5` is stored in the memory location pointed to by `&a`.

---

### <span style="color: pink;">Parsing Complex Inputs</span>

If the input has multiple values, parsing involves identifying boundaries between values:

```c
int a, b;
scanf("%d %d", &a, &b);
```

1. **`scanf` starts parsing from the beginning of the buffer:**

   - It recognizes `10` as the first integer based on the `%d` specifier.

2. **Skip Separator:**

   - It skips the space between `10` and `20`.

3. **Parse the Second Value:**

   - It identifies `20` as the second integer.

4. **Store Results:**
   - `10` is stored in `a`, and `20` is stored in `b`.

---

### <span style="color: pink;">Error Handling During Parsing</span>

```C
Copy code
int a;
scanf("%d", &a);
Input:

//Input:
//hello
```

- If the input does not match the expected format:
  - `scanf` stops parsing when it encounters invalid input.
  - Parsing fails because `"hello"` is not a valid integer.
  - `scanf` does not modify `a` and returns a value indicating the failure.

---

### <span style="color: pink;">Why is Parsing Important?</span>

1. **Validation:**

   - Ensures the input is structured correctly and matches the expected data type.

2. **Type Conversion:**

   - Converts textual input into usable data types (e.g., integers, floats).

3. **Boundary Handling:**
   - Deals with separators, whitespace, or special characters between values.

---

## <span style="color:pink" id="t9"> **What is the benefit of using a macro in C?**</span>

Macros in C (defined using `#define`) are handled by the **preprocessor**, which means:

- **Speed**: They are replaced **before compilation**, so no memory is allocated at runtime.
- **Code readability**: Macros help make your code cleaner (e.g., using `PI` instead of `3.14`).
- **Easy updates**: Change in one place updates all references.
- **Reusable constants or expressions**.

---

### ✅ **How many ways can we define macros in C?**

1. **Object-like Macros** – constants or simple substitutions

   ```c
   #define PI 3.14
   #define MAX 100
   ```

2. **Function-like (Parametric) Macros** – like functions, but substituted at compile time

   ```c
   #define SQUARE(x) ((x)*(x))
   #define AREA(r) (PI * (r) * (r))
   ```

3. **Multiline Macros** – using backslash `\`

   ```c
   #define PRINT_HELLO \
       printf("Hello\n"); \
       printf("World\n");
   ```

4. **Conditional Macros** – using `#ifdef`, `#ifndef`, `#if`

   ```c
   #ifdef DEBUG
   #define LOG(x) printf(x)
   #else
   #define LOG(x)
   #endif
   ```

---

### ⚠️ **Common problems with parametric macros:**

1. **Lack of type safety**: Macros don’t check types (unlike functions).
2. **Multiple evaluation issues**:

   ```c
   #define SQUARE(x) (x * x) // Problematic!
   SQUARE(2+3) => 2+3 * 2+3 = 2 + 6 + 3 = 11 (wrong!)
   ```

   ✅ Correct version: `#define SQUARE(x) ((x) * (x))`

3. **Side effects**:

   ```c
   #define INCREMENT(x) (x + 1)
   y = INCREMENT(i++); // i is incremented twice
   ```

4. **Debugging difficulty**: Errors can be harder to trace in macros.

---

### ⚡ **How do macros help in C programming performance optimisation?**

- **No function call overhead**: Parametric macros are directly substituted—no stack push/pop or return handling.
- **Inline substitution**: Helps in faster execution (though modern compilers optimize functions too).
- **Reduced memory usage** for constants—since `#define` doesn’t allocate memory.

But be careful: **too many macros** can **inflate code size (code bloat)** if used excessively.

---

### 🔍 **Code Comparison**

#### ✅ Version 1 (Using Macro)

```c
#define PI 3.14
#include<stdio.h>

int main(){
    float area;
    int r;
    printf("Enter the radius of Circle:");
    scanf("%d", &r);

    area = PI * r * r;
    printf("Area of circle is %f", area);
}
```

✔ Benefits:

- `PI` is defined once. If it changes, you update in one place.
- No runtime memory allocated for `PI`.
- Compiler substitutes `3.14` at preprocessing stage.
- Cleaner code.

---

#### ❌ Version 2 (Using Variable)

```c
int main(){
    int PI = 3.14;
    float area;
    int r;
    printf("Enter the radius of Circle:");
    scanf("%d", &r);

    area = 3.14 * r * r;
    printf("Area of circle is %f", area);
}
```

🔻 Problems:

- `int PI = 3.14;` is wrong. `3.14` is a float, assigned to int—**precision lost**.
- **Unnecessary memory** is allocated at runtime for `PI`.
- Hardcoded `3.14` is less maintainable.
- Not readable or reusable as a constant.

✅ Better fix:

```c
const float PI = 3.14;
```

But even then, it consumes memory at runtime—macros don’t.

---

### ✅ Conclusion:

| Feature                   | `#define PI 3.14` (Macro) | `int PI = 3.14` / `const float PI` |
| ------------------------- | ------------------------- | ---------------------------------- |
| Compile-time substitution | ✅ Yes                    | ❌ No                              |
| Runtime memory usage      | ❌ No                     | ✅ Yes                             |
| Type safety               | ❌ No                     | ✅ Yes                             |
| Easy to debug             | ❌ No                     | ✅ Yes                             |
| Reusability & readability | ✅ High                   | ✅ Medium                          |
| Optimization              | ✅ Better (no overhead)   | ✅ Good but slightly less          |

➡️ **Best practice:**

- Use `#define` for simple constants.
- Use `const` for type-safe, scoped constants.
- Use parametric macros carefully, or prefer inline functions for complex logic.

---
