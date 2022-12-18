#include <stdio.h>

char* my_strcat(char s[], char t[]) {
    char* res = s;
    int i = 0, j = 0;
    while (s[i] != '\0') {
        i++;}
    while (t[j] != '\0') {
        res[i++] = t[j++];}
    return res;
}
int main() {
    char s[] = "hey";
    char t[] = " you";
    printf("%s\n", my_strcat(s, t);
    return 0;
}
