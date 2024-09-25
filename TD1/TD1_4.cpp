#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

int factfor(int n) {   
    int fact = 1;    


    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;      
}

int factwhile(int n){
    int fact = 1;
    int i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    return fact;
}

int factrecursif(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return(n*factrecursif(n-1));
    } 
}


int main() {
    printf("%d\n", factfor(3));
    printf("%d\n", factwhile(4));
    printf("%d\n", factrecursif(4));
}