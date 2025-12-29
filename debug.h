#ifndef DEBUG_H
#define DEBUG_H

#define RESET "\033[0m"
#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define GREEN "\033[0;32m"

void sh_error(char message[]);
void sh_info(char message[]);
void sh_warning(char message[]);

#endif //DEBUG_H
