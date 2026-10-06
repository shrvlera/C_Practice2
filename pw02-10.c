#include <stdio.h>
#include <stdint.h>
int main() {
    int packet_id;
    uint8_t status_code;
    float voltage;
    uint16_t checksum;
    int temp_status;

    scanf("%x %o %f", &packet_id, &temp_status, &voltage);
    status_code = (uint8_t)temp_status;
    checksum  = (uint16_t)(packet_id + status_code);

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %d\n", status_code);
    printf("STATUS_CHAR: %c\n", status_code);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %d\n", checksum);
    return 0;
}
