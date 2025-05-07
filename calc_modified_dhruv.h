// calc_dhruv.h

#ifndef CALC_DHRUV_H
#define CALC_DHRUV_H

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
float divide(int x, int y);

int (*getAdd())(int, int);
int (*getSubtract())(int, int);
int (*getMultiply())(int, int);
float (*getDivide())(int, int);

#endif

