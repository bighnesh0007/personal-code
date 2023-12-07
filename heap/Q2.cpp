#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 2
#define ITERATIONS 1000000

int sharedCounter = 0;
pthread_mutex_t mutex;

void *incrementThread(void *threadID) {
    for (int i = 0; i < ITERATIONS; i++) {
        pthread_mutex_lock(&mutex); // Lock the mutex before accessing shared data

        // Critical section
        sharedCounter++;

        pthread_mutex_unlock(&mutex); // Unlock the mutex after accessing shared data
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];

    // Initialize the mutex
    if (pthread_mutex_init(&mutex, NULL) != 0) {
        fprintf(stderr, "Error initializing mutex\n");
        exit(1);
    }

    // Create threads
    for (int i = 0; i < NUM_THREADS; i++) {
        if (pthread_create(&threads[i], NULL, incrementThread, (void *)i) != 0) {
            fprintf(stderr, "Error creating thread\n");
            exit(1);
        }
    }

    // Wait for threads to finish
    for (int i = 0; i < NUM_THREADS; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            fprintf(stderr, "Error joining thread\n");
            exit(1);
        }
    }

    // Print the final value of the shared counter
    printf("Final value of sharedCounter: %d\n", sharedCounter);

    // Destroy the mutex
    pthread_mutex_destroy(&mutex);

    return 0;
}
