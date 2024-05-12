#include <stdio.h>
#include <stdbool.h>

#define init_cake_num 40
#define init_cookie_num 50
#define init_coffee_num 60

/* global variable declaration */
int choice; 

void menu(int cake, int cookie, int coffee) {
    printf("What do you want to order?\n");
    printf("1) cake : %d\n", cake);
    printf("2) cookie : %d\n", cookie);
    printf("3) coffee : %d\n", coffee);
}

void buy() {
    scanf("%d", &choice);

    /* local variable declaration */
    int pic = 0;

    /* static variable declaration */
    static int stock_cake_num = init_cake_num;
    static int stock_cookie_num = init_cookie_num;
    static int stock_coffee_num = init_coffee_num;

    switch (choice) {
        case 1:
            if(stock_cake_num>0)   stock_cake_num--;
            else   printf("We don't have any cake for your order. Please choice another thing.\n");   
            menu(stock_cake_num,stock_cookie_num,stock_coffee_num);
            return;
        case 2:
            if(stock_cookie_num>0)   stock_cookie_num--;
            else   printf("We don't have any cookie for your order. Please choice another thing.\n");   
            menu(stock_cake_num,stock_cookie_num,stock_coffee_num);
            return;
        case 3:
            if(stock_coffee_num>0)   stock_coffee_num--;
            else   printf("We don't have any coffee for your order. Please choice another thing.\n");   
            menu(stock_cake_num,stock_cookie_num,stock_coffee_num);
            return;
        case 5:
            printf("Do you want a picture?\n1) yes\n0) no\n");
            int a;
            scanf("%d", &a);
            if (a==1) 
                pic++;
            break;
        default:
            printf("Your choice not exist in menu. Please choose carefully!!\n");
            menu(stock_cake_num,stock_cookie_num,stock_coffee_num);
            return;
    }

    printf("pic num = %d\n", pic);
}

int main() {

    menu(init_cake_num, init_cookie_num, init_coffee_num);

    while(choice != 5)
        buy();

    printf("C U soon\n");

    return 0;
}