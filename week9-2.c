#include <stdio.h>
#include <string.h>
#include <ctype.h>

int dex(char *str, char c) {
    for (int i = 0; i < strlen(str); ++i) {
        if (c == str[i]) {
            return i;
        }
    }
    return -1;
}

void morse(char *msg) {
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *m[] = {
            ".-",
            "-...",
            "-.-.",
            "-..",
            ".",
            "..-.",
            "--.",
            "....",
            "..",
            ".---",
            "-.-",
            ".-..",
            "--",
            "-.",
            "---",
            ".--.",
            "--.-",
            ".-.",
            "...",
            "-",
            "..-",
            "...-",
            ".--",
            "-..-",
            "-.--",
            "--..",
            "-----",
            ".----",
            "..---",
            "...--",
            "....-",
            ".....",
            "-....",
            "--...",
            "---..",
            "----."
    };
    for (int i = 0; i < strlen(msg); ++i) {
        int pos = dex(a, (char) toupper(msg[i]));
        if (pos != -1) {
            printf("%s ", m[pos]);
        }
    }
}

int main() {
    char msg[100];
    fflush(stdin);
    printf("Enter any String to Convert into Morse Code :: ");
    gets(msg);
    morse(msg);
    return 0;
}