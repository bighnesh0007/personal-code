#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Structure to hold thread arguments
struct ThreadArgs {
    int num1;
    int num2;
};

// Global variables for results
int result_multiply, result_add;

// Function executed by the first thread to multiply two numbers
void *multiplyThread(void *args) {
    struct ThreadArgs *threadArgs = (struct ThreadArgs *)args;

    result_multiply = threadArgs->num1 * threadArgs->num2;

    pthread_exit(NULL);
}

// Function executed by the second thread to add two numbers
void *addThread(void *args) {
    struct ThreadArgs *threadArgs = (struct ThreadArgs *)args;

    result_add = threadArgs->num1 + threadArgs->num2;

    pthread_exit(NULL);
}

int main() {
    pthread_t multiplyThreadID, addThreadID;

    // Numbers to be passed to the threads
    struct ThreadArgs args = {10, 20};

    // Create the first thread for multiplication
    if (pthread_create(&multiplyThreadID, NULL, multiplyThread, (void *)&args) != 0) {
        fprintf(stderr, "Error creating multiply thread\n");
        exit(1);
    }

    // Create the second thread for addition
    if (pthread_create(&addThreadID, NULL, addThread, (void *)&args) != 0) {
        fprintf(stderr, "Error creating add thread\n");
        exit(1);
    }

    // Wait for the threads to finish
    if (pthread_join(multiplyThreadID, NULL) != 0 || pthread_join(addThreadID, NULL) != 0) {
        fprintf(stderr, "Error joining threads\n");
        exit(1);
    }

    // Print the results
    printf("Result of multiplication: %d\n", result_multiply);
    printf("Result of addition: %d\n", result_add);

    return 0;
}
