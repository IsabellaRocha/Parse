#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>

char ** parse_args( char * line ) {
    char** args;
    char* curr = line;
    int idx = 0;
    char *token;
    while(curr != NULL) {
        token = strsep(&curr, " ");
        args[idx] = token;
    }
    return args;
}

void printArray(char ** args) {
    int idx = 0;
    for (idx; idx < sizeof(args); idx++) {
        printf("%d ", args[idx]);
    }
}

int main() {
    printArray(parse_args("ls -a -l"));
    return 0;
}
