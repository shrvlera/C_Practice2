#include <stdio.h>
#include <stdbool.h> 

int main(void) {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    bool ready = num1;
    bool fault = num2;
    int sum = ready + fault;

    printf("MODULE_READY: %d\n", ready);
    printf("FAULT_STATE: %d\n", fault);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", sum);

    return 0;
}
