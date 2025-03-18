#include <stdio.h>
int fibonacciSeries(int n){
    return fibonacciSeries(n-1)+ fibonacciSeries(n-2);
}