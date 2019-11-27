#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

char ** parse_args( char * line ) {
    char** args = malloc(256);
    int idx = 0;
    while(line != NULL) {
        args[idx] = strsep(&line, " ");
        idx++;
    }
    args[idx] = NULL;
    return args;
}

int main() {
    char string[100] = "ls -a -l";
    char *str = string;
    char ** args = parse_args(str);
    execvp(args[0], args);
    return 0;
}
