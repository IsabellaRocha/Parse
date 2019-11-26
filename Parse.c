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
    char** = args[6];
    int idx = 0;
    char *token;
    while(line != NULL) {
        token = strsep(&line, " ");
        args[idx] = token;
    }
    return args;
}
