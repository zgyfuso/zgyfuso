#include <stdio.h>
void addspace(char s[]) {
    int n;
    n = 0;
    while (s[n]) n++;
    s[n * 2] = '\0';
    n--;
    while (n >= 0) {
        s[n * 2] = s[n];
        s[n * 2 + 1] = 32;
        n--;
    }
}
int main() {
    char s[255];
    gets_s(s);
    addspace(s);
    puts(s);
}