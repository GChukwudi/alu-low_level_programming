#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 10

// Define the struct for the storage
typedef struct {
    int *data;
    int start;
    int end;
    long sum;
} ThreadData;

/* Thread function to compute the sum of a portion of the array*/
void *computeSum(void *threadData) {
    ThreadData *data = (ThreadData *)threadData;
    long sum = 0;
    for (int i = data->start; i < data->end; i++) {
        sum += data->data[i];
    }
    data->sum = sum;
    pthread_exit(NULL);
}

int main() {
    int n;
    printf("Enter the number of elements(greater than 1000): ");
    scanf("%d", &n);

    if (n < 1000) {
        printf("Number of elements should be greater than 1000\n");
        return 1;
    }

    int *data = (int *)malloc(n * sizeof(int));
    if (data == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the array with random values
    for (int i = 0; i < n; i++) {
        data[i] = rand() % 100;
    }

    // Create an array of threads
    pthread_t threads[NUM_THREADS];
    ThreadData threadData[NUM_THREADS];

    int chunkSize = n / NUM_THREADS;

    // Create the threads
    for (int i = 0; i < NUM_THREADS; i++) {
        threadData[i].data = data;
        threadData[i].start = i * chunkSize;
        threadData[i].end = (i == NUM_THREADS - 1) ? n : threadData[i].start + chunkSize;
        pthread_create(&threads[i], NULL, computeSum, (void *)&threadData[i]);
    }

    // Wait for the threads to finish
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    // Compute the final sum
    long sum = 0;
    for (int i = 0; i < NUM_THREADS; i++) {
        sum += threadData[i].sum;
    }

    printf("Sum of the array elements: %ld\n", sum);

    free(data);
    return 0;
}
