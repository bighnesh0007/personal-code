#include <pthread.h>
#include <semaphore.h>

// Shared variable
int counter = 0;

// Semaphore to protect the shared variable
sem_t semaphore;

// Function executed by each thread
void *increment(void *arg) {
  // Lock the semaphore before accessing the shared variable
  sem_wait(&semaphore);

  // Increment the shared variable
  counter++;

  // Unlock the semaphore after accessing the shared variable
  sem_post(&semaphore);

  return NULL;
}

int main() {
  // Initialize the semaphore
  sem_init(&semaphore, 0, 1);

  // Create two threads
  pthread_t thread1;
  pthread_t thread2;
  pthread_create(&thread1, NULL, increment, NULL);
  pthread_create(&thread2, NULL, increment, NULL);

  // Wait for both threads to finish
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);

  // Print the value of the shared variable
  printf("The value of the shared variable is %d\n", counter);

  // Destroy the semaphore
  sem_destroy(&semaphore);

  return 0;
}

