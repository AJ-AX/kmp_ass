#include <stdio.h>
#include <stdlib.h>

int main(){
    char *p = malloc(sizeof(char)*4);
    printf("%c", *p);
}