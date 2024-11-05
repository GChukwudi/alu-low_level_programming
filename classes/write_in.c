#include <stdio.h>

int main() {
    FILE *file;
    char sentence[256];
    int i;

    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter 5 sentences:\n");
    for (i = 0; i < 5; i++) {
        printf("Sentence %d: ", i + 1);
        fgets(sentence, sizeof(sentence), stdin);
        fprintf(file, "%s", sentence);
    }

    fclose(file);

    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    fclose(file);

    return (0);
}
