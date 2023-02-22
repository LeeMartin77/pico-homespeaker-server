#include <stdio.h>
#include <stdbool.h>

#include "pico/stdlib.h"
#include "pico/multicore.h"

void core1_entry() {

    while (true) {
        noop();
    }
}

int main() {
    stdio_init_all();
    multicore_launch_core1(core1_entry);

    while (true) {
        noop();
    }
}

