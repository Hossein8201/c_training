#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define PI 3.14159265359

int main(){
    int a,b,C;    // a & b are the sides of triangle and C is the angle between a & b sides.
    float c,A,B,CR,AR,BR;
    srand(time(0));
    a = (rand()%19)+6;      b = (rand()%19)+6;      C = (rand()%89)+1;    // a & b in range 5<a,b<25. the angle C in range 0<C<90 
    CR = (PI/180)*C;    //the C angle in radian unit.
    c = sqrt(a*a + b*b - 2*a*b*cos(CR));     // law of cosinus.
    // the other angles of triangle in radian unit with law of sinus.
    if(a<b){    AR = asin((sin(CR)/c)*a);   A = (180/PI)*AR;    B = 180-A-C;}
    else{   BR = asin((sin(CR)/c)*b);   B = (180/PI)*BR;    A = 180-B-C;}
    // A & B & C is angles in digree unit.
    printf("the sides: a=%d  b=%d  c=%f\nthe angles: A=%f  B=%f  C=%d\nthe sum of angles: %f",a,b,c,A,B,C,A+B+C);
}