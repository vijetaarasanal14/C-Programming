#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // 1. Arithmetic Operators
    printf("Arithmetic:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    // 2. Relational Operators
    printf("Relational:\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n\n", a != b);

    // 3. Logical Operators
    printf("Logical:\n");
    printf("(a > b) && (b > 0) = %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0) = %d\n", (a < b) || (b > 0));
    printf("!(a == b) = %d\n\n", !(a == b));

    // 4. Bitwise Operators
    printf("Bitwise:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);

    // 5. Assignment Operators
    printf("Assignment:\n");
    int x = a;
    x += b;  printf("x += b → %d\n", x);
    x -= b;  printf("x -= b → %d\n", x);
    x *= b;  printf("x *= b → %d\n", x);
    x /= b;  printf("x /= b → %d\n\n", x);

    // 6. Increment and Decrement
    printf("Increment/Decrement:\n");
    int y = 5;
    printf("y = %d\n", y);
    printf("y++ = %d\n", y++);  // Post-increment
    printf("++y = %d\n\n", ++y); // Pre-increment

    // 7. Ternary Operator
    printf("Ternary:\n");
    int max = (a > b) ? a : b;
    printf("Max = %d\n\n", max);

    // 8. Special Operators
    printf("Special:\n");
    printf("sizeof(a) = %lu\n", sizeof(a));
    int *ptr = &a;
    printf("Address of a = %p\n", ptr);
    printf("Value at ptr = %d\n", *ptr);

    return 0;
}
