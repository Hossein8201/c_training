#include <stdio.h>
#include <stdbool.h>

// Constants
#define NAME "Test"
#define AGE (20 / 2)

// Macros
#define MIN(a, b) (((a)<(b))?(a):(b))
#define MAX(a, b) (((a)>(b))?(a):(b))

// Definition
#define MYLIB


int main() {
    int age = 25;
    printf("Age: %d\n", age);

    float height = 5.9;
    double weight = 68.5;
    printf("Height: %.2f\n", height);
    printf("Weight: %.2f\n", weight);
    printf("Height: %4.2f\n", height);
    printf("Weight: %5.2f\n", weight);
    printf("Height: %4.6f\n", height);
    printf("Weight: %5.7f\n", weight);

    char grade = 'A';
    printf("Grade: %c\n", grade);

    int is_passed_exam = 1; // 1 represents true
    int is_student_enrolled = 0; // 0 represents false

    printf("Passed exam: %d\n", is_passed_exam);
    printf("Student enrolled: %d\n", is_student_enrolled);

    bool is_passed_exam_bool = true;
    bool is_student_enrolled_bool = false;

    printf("Passed exam: %d\n", (is_passed_exam && is_passed_exam_bool) ? 100 : 0);
    printf("Student enrolled: %d\n", (is_student_enrolled && 100) ? 100 : 0);

    printf("=============================\n\n");

    // Implicit casting
    int num_int = 10;
    double num_double;
    num_double = num_int;

    // Explicit casting
    double num_explicit_double = 3.14;
    int num_explicit_int;
    num_explicit_int = (int) num_explicit_double;

    // Forced casting
    int num_forced_int = 1000;
    char num_char;
    num_char = (char) num_forced_int;

    // Overflow and Underflow in Casting
    int num_overflow_int = 300;
    char num_overflow_char;
    num_overflow_char = (char) num_overflow_int;

    printf("Implicit Casting:\n");
    printf("Integer value: %d\n", num_int);
    printf("Double value: %f\n", num_double);

    printf("\nExplicit Casting:\n");
    printf("Double value: %f\n", num_explicit_double);
    printf("Integer value: %d\n", num_explicit_int);

    printf("\nForced Casting:\n");
    printf("Integer value: %d\n", num_forced_int);
    printf("Character value: %c\n", num_char);

    printf("\nOverflow and Underflow in Casting:\n");
    printf("Integer value: %d\n", num_overflow_int);
    printf("Character value: %c\n", num_overflow_char);


    printf("=============================\n\n");

    // Using constants
    printf("Name: %s\n", NAME);
    printf("Age: %d\n", AGE);

    // Using macros
    int num1 = 10, num2 = 20;
    printf("Minimum of %d and %d is %d\n", num1, num2, MIN(num1, num2));
    printf("Maximum of %d and %d is %d\n", num1, num2, MAX(num1, num2));




    return 0;
}
