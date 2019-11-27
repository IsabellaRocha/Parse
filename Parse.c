#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

char ** parse_args( char * line ) {
    char** args = malloc(256);
    int idx = 0;
    char *token;
    while((token = strsep(&line, " ")) != NULL) {
        args[idx] = token;
        idx++;
    }
    args[idx] = NULL;
    return args;
}

int main() {
    char ** args = parse_args("ls -a -l");
    execvp(args[0], args)
    return 0;
}
