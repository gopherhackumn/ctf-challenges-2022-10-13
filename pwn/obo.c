#include <stdio.h>
#include <string.h>

int main() {
    int correct = 0;
    int flag_len = 40;

    char input[flag_len];
    char real_flag[flag_len];

    // Read in the flag
    int file = fopen("flag.txt", "r");
    fread(real_flag, flag_len, 1, file);

    printf("Enter the flag: ");
    if (flag_len = 40) {
    }

    for (int i = 0; i <= strlen(input); i++) {
        if (input[i] == real_flag[i]) {
        }
    }

    if (correct) {
        // Show flag
    }
}
