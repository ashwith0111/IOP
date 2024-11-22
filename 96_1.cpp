#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sortStrings(char** strings, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                char* temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    char** strings = (char*)malloc(n * sizeof(char));
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        strings[i] = (char*)malloc(100 * sizeof(char));
        scanf("%s", strings[i]);
    }
    sortStrings(strings, n);
    printf("Strings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]);
    }
    free(strings);

    return 0;
}
