# C Programming Mastery Cheat Sheet

## Table of Contents
1. [Fundamentals](#fundamentals)
2. [Data Types & Variables](#data-types)
3. [Operators](#operators)
4. [Control Structures](#control-structures)
5. [Functions](#functions)
6. [Arrays](#arrays)
7. [Pointers](#pointers)
8. [Strings](#strings)
9. [Structures & Unions](#structures)
10. [File Handling](#file-handling)
11. [Memory Management](#memory-management)
12. [Preprocessor Directives](#preprocessor)
13. [Important Header Files](#headers)
14. [Advanced Topics](#advanced)
15. [Exercise Questions](#exercises)

---

## <a name="fundamentals"></a>1. Fundamentals

### Basic Structure of C Program
```c
#include <stdio.h>  // Preprocessor directive

int main() {        // Main function - program entry point
    printf("Hello, World!\n");  // Output statement
    return 0;       // Exit status
}
```

### Compilation Process
1. **Preprocessing**: Handles `#include` and `#define`
2. **Compilation**: Converts to assembly code
3. **Assembly**: Converts to machine code
4. **Linking**: Combines with library functions

---

## <a name="data-types"></a>2. Data Types & Variables

### Basic Data Types
```c
int age = 25;           // Integer: -2,147,483,648 to 2,147,483,647
float salary = 2500.50; // Single precision floating point
double price = 99.99;   // Double precision floating point
char grade = 'A';       // Single character
void;                  // No type/empty
```

### Type Modifiers
```c
short int smallNumber;  // -32,768 to 32,767
long int bigNumber;     // Larger range
unsigned int positive;  // 0 to 4,294,967,295
const float PI = 3.14;  // Constant value
```

### Variable Declaration & Initialization
```c
int x;          // Declaration
x = 10;         // Assignment
int y = 20;     // Declaration + Initialization
```

---

## <a name="operators"></a>3. Operators

### Arithmetic Operators
```c
int a = 10, b = 3;
a + b;  // Addition: 13
a - b;  // Subtraction: 7
a * b;  // Multiplication: 30
a / b;  // Division: 3
a % b;  // Modulus: 1
```

### Relational Operators
```c
a == b;  // Equal to: false
a != b;  // Not equal: true
a > b;   // Greater than: true
a < b;   // Less than: false
a >= b;  // Greater than or equal: true
a <= b;  // Less than or equal: false
```

### Logical Operators
```c
! (a == b);  // NOT: true
(a > 5) && (b < 5);  // AND: true
(a > 10) || (b < 2); // OR: false
```

### Bitwise Operators
```c
a & b;   // AND
a | b;   // OR
a ^ b;   // XOR
~a;      // NOT
a << 2;  // Left shift
a >> 1;  // Right shift
```

---

## <a name="control-structures"></a>4. Control Structures

### Conditional Statements
```c
// if-else
if (age >= 18) {
    printf("Adult\n");
} else {
    printf("Minor\n");
}

// else-if ladder
if (marks >= 90) {
    grade = 'A';
} else if (marks >= 75) {
    grade = 'B';
} else {
    grade = 'C';
}

// switch-case
switch(day) {
    case 1: printf("Monday"); break;
    case 2: printf("Tuesday"); break;
    default: printf("Invalid day");
}
```

### Loops
```c
// for loop
for(int i = 0; i < 10; i++) {
    printf("%d ", i);
}

// while loop
int count = 0;
while(count < 5) {
    printf("%d ", count);
    count++;
}

// do-while loop
int num;
do {
    printf("Enter positive number: ");
    scanf("%d", &num);
} while(num <= 0);
```

### Loop Control
```c
for(int i = 0; i < 10; i++) {
    if(i == 5) break;     // Exit loop completely
    if(i % 2 == 0) continue; // Skip current iteration
    printf("%d ", i);
}
```

---

## <a name="functions"></a>5. Functions

### Function Definition & Call
```c
// Function declaration (prototype)
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}

// Function call
int result = add(5, 3);
```

### Types of Functions
```c
// Function with no return value
void printMessage() {
    printf("Hello from function!\n");
}

// Function with no parameters
int getNumber() {
    return 42;
}

// Function with array parameter
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
```

### Storage Classes
```c
auto int x;        // Default (local variables)
register int y;    // Store in CPU register
static int count;  // Preserves value between calls
extern int global; // Defined in another file
```

---

## <a name="arrays"></a>6. Arrays

### One-dimensional Arrays
```c
int numbers[5] = {1, 2, 3, 4, 5};  // Declaration & initialization
numbers[0] = 10;  // Access first element
int size = sizeof(numbers) / sizeof(numbers[0]);  // Array length
```

### Multi-dimensional Arrays
```c
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
printf("%d", matrix[1][2]);  // Output: 6
```

### Array Operations
```c
// Traversing array
for(int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
}

// Passing array to function
void modifyArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}
```

---

## <a name="pointers"></a>7. Pointers (Important!)

### Basic Pointer Concepts
```c
int x = 10;
int *ptr = &x;     // Pointer declaration and initialization

printf("%d\n", x);     // Value of x: 10
printf("%p\n", &x);    // Address of x
printf("%p\n", ptr);   // Value of ptr (address of x)
printf("%d\n", *ptr);  // Dereferencing: value at address
```

### Pointer Arithmetic
```c
int arr[] = {10, 20, 30};
int *ptr = arr;

printf("%d\n", *ptr);     // 10
printf("%d\n", *(ptr+1)); // 20 (pointer arithmetic)
printf("%d\n", ptr[1]);   // 20 (array notation)
```

### Pointers and Functions
```c
// Call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Usage
int x = 5, y = 10;
swapByValue(x, y);      // x and y unchanged
swapByReference(&x, &y); // x and y swapped
```

### Pointers to Pointers
```c
int x = 10;
int *ptr = &x;
int **pptr = &ptr;

printf("%d\n", **pptr);  // 10
```

---

## <a name="strings"></a>8. Strings

### String Declaration & Initialization
```c
char str1[] = "Hello";           // Automatic size calculation
char str2[6] = "Hello";          // Explicit size
char str3[] = {'H','e','l','l','o','\0'}; // Character array
char *str4 = "Hello";            // String literal
```

### String Functions (from string.h)
```c
#include <string.h>

char str1[20] = "Hello";
char str2[20] = "World";

strlen(str1);           // Length: 5
strcpy(str2, str1);     // Copy str1 to str2
strcat(str1, " World"); // Concatenation
strcmp(str1, str2);     // Compare: 0 if equal
```

### String Input/Output
```c
char name[50];

printf("Enter name: ");
scanf("%s", name);          // Reads until whitespace
printf("Hello %s\n", name);

printf("Enter full name: ");
fgets(name, 50, stdin);     // Reads including spaces
puts(name);                 // Output with newline
```

---

## <a name="structures"></a>9. Structures & Unions

### Structures
```c
// Structure definition
struct Student {
    char name[50];
    int rollno;
    float marks;
};

// Structure variable declaration
struct Student s1;
struct Student s2 = {"John", 101, 85.5};

// Accessing members
strcpy(s1.name, "Alice");
s1.rollno = 102;
s1.marks = 90.0;

// Structure pointer
struct Student *ptr = &s1;
printf("%s\n", ptr->name);  // Arrow operator for pointers
```

### Typedef with Structures
```c
typedef struct {
    char name[50];
    int age;
} Person;

Person p1;  // No need for 'struct' keyword
```

### Unions
```c
union Data {
    int i;
    float f;
    char str[20];
};

union Data data;
data.i = 10;        // Only one member can hold value at a time
printf("%d", data.i);
```

---

## <a name="file-handling"></a>10. File Handling

### File Operations
```c
#include <stdio.h>

FILE *fptr;

// Writing to file
fptr = fopen("file.txt", "w");
fprintf(fptr, "Hello File!\n");
fclose(fptr);

// Reading from file
fptr = fopen("file.txt", "r");
char buffer[100];
fgets(buffer, 100, fptr);
printf("%s", buffer);
fclose(fptr);
```

### File Modes
- `"r"` - Read (file must exist)
- `"w"` - Write (creates new or truncates)
- `"a"` - Append (creates new or appends)
- `"r+"` - Read and write
- `"w+"` - Write and read (truncates)
- `"a+"` - Append and read

### File Functions
```c
fopen()     // Open file
fclose()    // Close file
fprintf()   // Formatted write
fscanf()    // Formatted read
fgets()     // Read string
fputs()     // Write string
fgetc()     // Read character
fputc()     // Write character
feof()      // Check end of file
```

---

## <a name="memory-management"></a>11. Memory Management

### Dynamic Memory Allocation
```c
#include <stdlib.h>

// malloc - memory allocation
int *arr = (int*)malloc(5 * sizeof(int));

// calloc - contiguous allocation (initialized to 0)
int *arr2 = (int*)calloc(5, sizeof(int));

// realloc - reallocate memory
arr = (int*)realloc(arr, 10 * sizeof(int));

// free - release memory
free(arr);
free(arr2);
```

### Memory Allocation Functions
- `malloc(size)` - Allocates memory (garbage values)
- `calloc(n, size)` - Allocates and initializes to zero
- `realloc(ptr, size)` - Resizes allocated memory
- `free(ptr)` - Releases allocated memory

---

## <a name="preprocessor"></a>12. Preprocessor Directives

### Common Directives
```c
#include <stdio.h>      // Include system header
#include "myheader.h"   // Include user header

#define PI 3.14159      // Macro definition
#define SQUARE(x) ((x) * (x))  // Function-like macro

#ifdef DEBUG            // Conditional compilation
    printf("Debug mode\n");
#endif

#ifndef MAX_SIZE
    #define MAX_SIZE 100
#endif
```

### Predefined Macros
```c
printf("File: %s\n", __FILE__);     // Current filename
printf("Date: %s\n", __DATE__);     // Compilation date
printf("Time: %s\n", __TIME__);     // Compilation time
printf("Line: %d\n", __LINE__);     // Current line number
```

---

## <a name="headers"></a>13. Important Header Files

### <stdio.h> - Input/Output
```c
printf()     // Formatted output
scanf()      // Formatted input
getchar()    // Read character
putchar()    // Write character
gets()       // Read string (unsafe)
puts()       // Write string
fopen()      // Open file
fclose()     // Close file
fread()      // Read from file
fwrite()     // Write to file
```

### <stdlib.h> - Standard Library
```c
malloc()     // Memory allocation
calloc()     // Contiguous allocation
realloc()    // Reallocate memory
free()       // Free memory
atoi()       // String to integer
atof()       // String to float
rand()       // Random number
srand()      // Seed random generator
exit()       // Exit program
```

### <string.h> - String Operations
```c
strlen()     // String length
strcpy()     // String copy
strcat()     // String concatenation
strcmp()     // String compare
strchr()     // Find character in string
strstr()     // Find substring
strtok()     // String tokenization
```

### <math.h> - Mathematical Functions
```c
sqrt()       // Square root
pow()        // Power
sin(), cos(), tan()  // Trigonometric
log()        // Natural logarithm
log10()      // Base-10 logarithm
ceil()       // Round up
floor()      // Round down
fabs()       // Absolute value (float)
```

### <ctype.h> - Character Handling
```c
isalpha()    // Check if alphabetic
isdigit()    // Check if digit
isalnum()    // Check if alphanumeric
islower()    // Check if lowercase
isupper()    // Check if uppercase
tolower()    // Convert to lowercase
toupper()    // Convert to uppercase
```

### <time.h> - Time Functions
```c
time()       // Get current time
ctime()      // Convert time to string
localtime()  // Convert to local time
difftime()   // Difference between times
clock()      // Processor clock time
```

---

## <a name="advanced"></a>14. Advanced Topics

### Recursion
```c
// Factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Fibonacci series
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
```

### Function Pointers
```c
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    int (*operation)(int, int);  // Function pointer declaration
    
    operation = add;
    printf("Addition: %d\n", operation(5, 3));
    
    operation = multiply;
    printf("Multiplication: %d\n", operation(5, 3));
    
    return 0;
}
```

### Command Line Arguments
```c
int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    
    for(int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
```

### Error Handling
```c
#include <errno.h>
#include <string.h>

FILE *fptr = fopen("nonexistent.txt", "r");
if (fptr == NULL) {
    printf("Error: %s\n", strerror(errno));
    perror("fopen failed");
}
```

---

## <a name="exercises"></a>15. Exercise Questions

### Level 1: Basic Concepts

**1. Variables & Operators**
```c
// Write a program to:
// - Swap two numbers without third variable
// - Check if number is even or odd
// - Convert Celsius to Fahrenheit
```

**2. Control Structures**
```c
// Write programs for:
// - Find largest of three numbers
// - Check if year is leap year
// - Print multiplication table
// - Fibonacci series up to n terms
```

**3. Functions**
```c
// Create functions for:
// - Check if number is prime
// - Calculate factorial
// - Check if number is palindrome
// - Find GCD of two numbers
```

### Level 2: Arrays & Strings

**4. Arrays**
```c
// Implement:
// - Find sum and average of array elements
// - Search element in array (linear search)
// - Reverse an array
// - Sort array (bubble sort)
```

**5. Strings**
```c
// Write functions for:
// - Count vowels and consonants
// - Check if string is palindrome
// - Remove spaces from string
// - Count words in string
```

### Level 3: Pointers & Structures

**6. Pointers**
```c
// Practice:
// - Swap two numbers using pointers
// - Access array elements using pointers
// - Find string length using pointers
// - Copy string using pointers
```

**7. Structures**
```c
// Create programs for:
// - Student record system
// - Complex number operations
// - Distance between two points
// - Employee database
```

### Level 4: Advanced Problems

**8. File Handling**
```c
// Implement:
// - Copy contents of one file to another
// - Count characters, words, lines in file
// - Student marks storage system
// - Employee payroll system
```

**9. Dynamic Memory**
```c
// Practice:
// - Dynamic array operations
// - Matrix operations using dynamic allocation
// - Linked list implementation
// - Memory leak detection
```

**10. Complete Projects**
```c
// Build complete systems:
// - Library management system
// - Bank account management
// - Student grade system
// - Contact management system
// - Simple calculator with history
```

### Final Challenge Projects

**Project 1: Student Database System**
- Add, delete, modify student records
- Store data in files
- Search and sort functionality
- Generate reports

**Project 2: Banking System**
- Account creation and deletion
- Deposit and withdrawal
- Transaction history
- Balance inquiry

**Project 3: Library Management**
- Book issue and return
- Member management
- Fine calculation
- Search functionality

---

## 🎯 Learning Path Completion Checklist

After completing these exercises, you should be able to confidently:

✅ Write complex C programs independently  
✅ Understand and use pointers effectively  
✅ Work with dynamic memory allocation  
✅ Handle file operations proficiently  
✅ Implement data structures in C  
✅ Debug and optimize C code  
✅ Build complete applications in C  

**Remember**: Practice regularly, understand the concepts thoroughly, and don't hesitate to experiment with code. Programming mastery comes with consistent practice and curiosity!

**Next Steps**: After mastering these concepts, explore Data Structures (Linked Lists, Trees, Graphs) and Algorithms in C to become an expert programmer.

---
*This comprehensive cheat sheet covers everything from basics to advanced topics. Study each section thoroughly and practice all exercises to become confident in C programming!*
