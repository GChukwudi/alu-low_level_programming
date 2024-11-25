#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME 100
#define FILE_NAME "students.txt"


void sortNames(char names[MAX_STUDENTS][MAX_NAME], int count, int (*compare)(const char*, const char*));
void countNames(char names[MAX_STUDENTS][MAX_NAME], int count);
int ascending(const char* a, const char* b);
int descending(const char* a, const char* b);

int ascending(const char* a, const char* b) {
    return strcmp(a, b);
}

int descending(const char* a, const char* b) {
    return strcmp(b, a);
}

void sortNames(char names[MAX_STUDENTS][MAX_NAME], int count, int (*compare)(const char*, const char*)) {
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (compare(names[i], names[j]) > 0) {
                char temp[MAX_NAME];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("Sorted names: \n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", names[i]);
    }
}

void countNames(char names[MAX_STUDENTS][MAX_NAME], int count) {
    printf("Total number of names: %d\n", count);
}

int readNames(char *filename, char names[MAX_STUDENTS][MAX_NAME]) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file\n");
        return -1;
    }
    int count = 0;
    while (fgets(names[count], MAX_NAME, file) != NULL) {
        names[count][strcspn(names[count], "\n")] = 0;
        count++;
        if (count >= MAX_STUDENTS) {
            printf("Maximum number of students reached\n");
            break;
        }
    }
    fclose(file);
    return count;
}

int main() {
    char names[MAX_STUDENTS][MAX_NAME];
    int count = readNames(FILE_NAME, names);
    if (count < 0) {
        return 1;
    }

    int choice;
    printf("Enter your choice: \n");
    printf("1. Sort names\n");
    printf("2. Count names\n");
    scanf("%d", &choice);

    if (choice == 1) {
        char order[5];
        printf("Enter order (asc/desc): ");
        scanf("%s", order);
        
        if (strcmp(order, "asc") == 0) {
            sortNames(names, count, ascending);
        } else if (strcmp(order, "desc") == 0) {
            sortNames(names, count, descending);
        } else {
            printf("Invalid order\n");
        }
    } else if (choice == 2) {
        countNames(names, count);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
