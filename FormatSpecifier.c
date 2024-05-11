#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    // # Format Specifier   # Data Types
    // "%d" or "%i"         int
    // "%f" or "%F"         float
    // "%lf"                double
    // "%c"                 char
    // "%s"                 strings / char[index]

    int myNum = 10;
    float myFloat = 10.2;
    char myChar = 'M';
    bool myBoolean = false;
    double myDouble = 10.2;

    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myChar);
    printf("%d\n", myBoolean);
    printf("%d", myDouble);

    // Example
    int studentId = 1;
    char studentName[30] = "Muhammad Ayom Izzuddin";
    printf("%d\n", studentId);
    printf("%s\n", studentName);

    return 0;
}
