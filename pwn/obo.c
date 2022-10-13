#include <stdio.h>
#include <unistd.h>

int main() {
    int length = 128;
    char name[length];
    char flag[length];
  
    // read in flag
    FILE* file = fopen("flag.txt", "r");
    fread(flag, length, 1, file);

    // read in name
    printf("What's your name?\n");
    read(0, name, length);
  
    printf("Hello: %s\n", name);
    printf("You'll never get my secret!\n");
    return 0;
}
