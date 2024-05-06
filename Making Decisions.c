#include <stdio.h>

int main() {

    int x = 10, y = 20, z = 30;
    int max;
    if (x > y && x > z) {
        max = x;
    } else if (y > z) {
        max = y;
    } else {
        max = z;
    }

    printf("Maximum using if-else: %d\n", max);

    max = (x > y && x > z) ? x : ((y > z) ? y : z);
    printf("Maximum using conditional expression: %d\n", max);

    int day = 3;
    char *dayName;

    switch (day) {
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        case 7:
            dayName = "Sunday";
            break;
        default:
            dayName = "Invalid day";
    }

    printf("Day of the week: %s\n", dayName);

            // what is happening without break?
    switch (day) {
        case 1:
            dayName = "Monday";

        case 2:
            dayName = "Tuesday";

        case 3:
            dayName = "Wednesday";

        case 4:
            dayName = "Thursday";

        case 5:
            dayName = "Friday";

        case 6:
            dayName = "Saturday";

        case 7:
            dayName = "Sunday";

        default:
            dayName = "Invalid day";
    }

    printf("Day of the week: %s\n", dayName);

    if (x < y && y < z) printf("x is less than y and y is less than z\n");

    if (x == 5 || y == 20)printf("x is equal to 5 or y is equal to 20\n");

    if (!(x > y)) printf("x is not greater than y\n");

    x = y + 10;
    printf("Value of x after single statement: %d\n", x);

    printf("Enter an integer: ");
    scanf("%d", &day);
    printf("You entered: %d\n", day);

    if (x > y)printf("x is greater than y\n");
    else printf("x is not greater than y\n");

    int a = 100, b = 200;
    printf("Sum of a and b: %d\n", a + b);

    if (x < y)
        if (y < z)
            printf("x is less than y and y is less than z\n");
    return 0;
}