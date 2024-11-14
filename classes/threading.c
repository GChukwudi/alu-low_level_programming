#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 10


void *print_numbers(void *arg)
{
    long *range = (long *)arg;
    long start = range[0];
    long end = range[1];
    for (long i = start; i < end; i++)
    {
        printf("%ld\n", i);
    }
    free(arg);
    pthread_exit(NULL);
}

int main()
{
    long n;
    printf("Enter a large number (>=1000000): ");
    scanf("%ld", &n);

    if (n < 1000000)
    {
        printf("The number should be at least 1000000.\n");
        return 1;
    }

    pthread_t threads[NUM_THREADS];
    long range_size = n / NUM_THREADS;

    for (int i = 0; i < NUM_THREADS; i++)
    {

        long *range = malloc(2 * sizeof(long));
        if (range == NULL)
        {
            perror("Failed to allocate memory");
            exit(1);
        }

        range[0] = i * range_size;
        range[1] = (i == NUM_THREADS - 1) ? n : (i + 1) * range_size;


        if (pthread_create(&threads[i], NULL, print_numbers, (void *)range) != 0)
        {
            perror("Failed to create thread");
            exit(1);
        }
    }

    for (int i = 0; i < NUM_THREADS; i++)
    {
        if (pthread_join(threads[i], NULL) != 0)
        {
            perror("Failed to join thread");
            exit(1);
        }
    }

    printf("All threads completed.\n");
    return (0);
}
