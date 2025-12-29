#include <stdio.h>
#include "debug.h"

void sh_error(char message[]) {
    printf("%sERROR: %s%s\n", RED, RESET, message);
}

void sh_info(char message[]) {
    printf("%sINFO: %s%s\n", GREEN, RESET, message);
}

void sh_warning(char message[]) {
    printf("%sWARNING: %s%s\n", YELLOW, RESET, message);
}
