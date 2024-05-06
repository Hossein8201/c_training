 #include <stdio.h>

int main() {
    int a = 10;
    long b = 20L;
    float c = 3.5f;
    double d = 5.7;

// Examples of various operations based on type conversion rules
    double result1 = a + b; // int + long → long
    float result2 = c + d;  // float + double → double
    float result3 = a + c;  // int + float → float
    double result4 = d + c; // double + float → double
    int result5 = (char) a + b; // char + long → long
    long result6 = (short) b + a; // short + int → int (promotion to long)

    printf("Result 1: %ld\n", result1);
    printf("Result 2: %f\n", result2);
    printf("Result 3: %f\n", result3);
    printf("Result 4: %f\n", result4);
    printf("Result 5: %d\n", result5);
    printf("Result 6: %ld\n", result6);

    printf("=============================\n\n");


    // Integer division
    int int_dividend = 10;
    int int_divisor = 3;
    int int_result = int_dividend / int_divisor;
    printf("Integer Division Result: %d\n", int_result); // Output: 3 (not 3.3333)

    // Floating-point division
    float float_dividend = 10.0f;
    float float_divisor = 3.0f;
    float float_result = float_dividend / float_divisor;
    printf("Floating-point Division Result: %.2f\n", float_result); // Output: 3.33

    // Mixed division (integer dividend, floating-point divisor)
    int mixed_dividend = 10;
    float mixed_divisor = 3.0f;
    float mixed_result = mixed_dividend / mixed_divisor;
    printf("Mixed Division Result: %.2f\n", mixed_result); // Output: 3.33 (implicit conversion of dividend to float)

    // Mixed division (floating-point dividend, integer divisor)
    float mixed2_dividend = 10.0f;
    int mixed2_divisor = 3;
    float mixed2_result = mixed2_dividend / mixed2_divisor;
    printf("Mixed Division Result: %.2f\n", mixed2_result); // Output: 3.33 (implicit conversion of divisor to float)

    printf("=============================\n\n");
    int aa = 5;
    printf("Initial value of a: %d\n", aa);
    printf("After incrementing a: %d\n", aa);

    int bb = 10;
    printf("Initial value of b: %d\n", bb);
    printf("After decrementing b: %d\n", bb);

    int cc = 7;
    printf("Initial value of c: %d\n", cc);

    printf("Prefix increment of c: %d\n", ++cc);
    printf("Value of c after prefix increment: %d\n", cc);

    printf("Postfix increment of c: %d\n", cc++);
    printf("Value of c after postfix increment: %d\n", cc);

    printf("Prefix decrement of c: %d\n", --cc);
    printf("Value of c after prefix decrement: %d\n", cc);

    printf("Postfix decrement of c: %d\n", cc--);
    printf("Value of c after postfix decrement: %d\n", cc);

    return 0;
}