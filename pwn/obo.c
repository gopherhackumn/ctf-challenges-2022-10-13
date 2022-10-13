#include <stdio.h>
#include <unistd.h>

int main() {
    length = 128;
    char name[length] = {0};
    char flag[length] = {0};
  
    // read in flag
    int file = fopen("flag.txt", "r");
    fread(flag, length, 1, file);

    // read in name
    printf("What's your name?\n");
    read(0, name, length);
  
    printf("Hello: %s\n", name);
    printf("You'll never get my secret!\n");
    return 0;
}
