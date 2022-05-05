#include <stdio.h>

int main() {
    char str[] = "A string.";//to store the given string
    char *pc = str;//creating a pointer
    printf("%c %c %c\n",str[0],*pc,pc[3]);
    pc+=2;//increasing the pointer by 2
    printf("%c %c %c",*pc,pc[2],pc[5]);
    return 0;
}
