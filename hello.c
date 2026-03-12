#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>

void mr_Avgerinos_is_the_best() {
  execl("/bin/sh", "sh", NULL);
}

int main() {
    char name[64];
    setresuid(0, 0, 0);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}