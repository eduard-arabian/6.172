// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define PRINT_SIZE(A) {\
    printf("size of "#A" : %zu bytes\n", sizeof(A));\
    printf("pointer size of "#A" : %zu bytes\n", sizeof(A*));\
}

#define PRINT_USUAL_SIZE(A) (printf("size of "#A" : %zu bytes\n", sizeof(A)))

int main() {
    PRINT_SIZE(int);
    PRINT_SIZE(short);
    PRINT_SIZE(long);
    PRINT_SIZE(char);
    PRINT_SIZE(float);
    PRINT_SIZE(double);
    PRINT_SIZE(unsigned int);
    PRINT_SIZE(long long);
    PRINT_SIZE(uint8_t);
    PRINT_SIZE(uint16_t);
    PRINT_SIZE(uint32_t);
    PRINT_SIZE(uint64_t);
    PRINT_SIZE(uint_fast8_t);
    PRINT_SIZE(uint_fast16_t);
    PRINT_SIZE(uintmax_t);
    PRINT_SIZE(intmax_t);
    PRINT_SIZE(__int128);

    typedef struct {
        int id;
        int year;
    } student;

    student you;
    you.id = 12345;
    you.year = 4;

    PRINT_USUAL_SIZE(you);
    printf("pointer size of you : %zu bytes\n", sizeof(&you));

    int x[5];
    PRINT_USUAL_SIZE(x);
    printf("pointer size of x : %zu bytes\n", sizeof(&x));


    return 0;
}
