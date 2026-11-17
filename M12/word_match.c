#include <stdio.h>
#include <string.h>
#include <ctype.h>

int words_match(const char *a, const char *b) {
    if (strlen(a) != strlen(b)) {
        return 0;
    }
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    const char *words[] = {"This", "coffee", "maker", "is", "good", "very", "good", "Good", "quality"};
    int n = 9;
    const char *target = "good";
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (words_match(words[i], target)) {
            count++;
        }
    }

    printf("Occurrences of \"%s\" (intended case-insensitive): %d\n", target, count);
    return 0;
}
