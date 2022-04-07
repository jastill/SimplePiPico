#include "source.h"

int main() {
    stdio_init_all();
    
    // Count 2^8 afore wrapping...
    uint8_t count = 0;

    // Infinite loop
    while (true) {
        printf("Hello world %d\n",count++);
        sleep_ms(200);
    }
    return 0;
}