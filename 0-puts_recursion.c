#include <stdio.h>

void printString(const char* str)
{
    if (*str == '\0') {
        putchar('\n'); // Print new line
        return;
    }
    
    putchar(*str); // Print current character
    printString(str + 1); // Recursive call with next character
}

int main()
{
    const char* message = "Hello, world!";
    printString(message);
    
    return 0;
}
