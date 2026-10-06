#include <stdio.h>
#include <stdint.h>
int main() {
    uint8_t num;
    int vvod;
    scanf("%d", &vvod);
    num = (uint8_t)vvod;
    uint8_t add = num + 10;
    uint8_t mul2 = num*2;
    uint8_t sqr = num*num;
    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul2);
    printf("SQR: %u\n", (unsigned int)sqr);
    return 0;
}
