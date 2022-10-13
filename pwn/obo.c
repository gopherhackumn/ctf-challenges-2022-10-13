#include <stdio.h>
#include <unistd.h>

int main() {
    char name[128] = {0};
    char flag[128] = {0};
  
    // read in flag
    int file = fopen("flag.txt", "r");
    fread(flag, 128, 1, file);

    // read in name
    printf("What's your name?\n");
    read(0, name, 128);
  
    printf("Hello: %s\n", name);
    printf("You'll never get my secret!\n");
    return 0;
}
