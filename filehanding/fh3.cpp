#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define a process structure to store information about each process.
typedef struct {
    int id;             // Process ID
    int arrival_time;   // Arrival time
    int burst_time;     // CPU burst time
    int priority;       // Priority level
    int completion_time; // Completion time
    int turnaround_time; // Turnaround time
    int waiting_time;   // Waiting time
} Process;

int main() {
    // Initialize random number generator
    srand(time(NULL));

    // Define constants and variables
    int num_processes = 10; // Number of processes
    int total_time = 0;     // Total time for simulation
    int current_time = 0;   // Current time
    double avg_turnaround_time = 0;
    double avg_waiting_time = 0;
    double avg_completion_time = 0;

    // Create an array of processes
    Process processes[num_processes];

    // Generate random arrival times and burst times for processes
    for (int i = 0; i < num_processes; i++) {
        processes[i].id = i;
        processes[i].arrival_time = rand() % 10;  // Random arrival time
        processes[i].burst_time = 1 + rand() % 10; // Random burst time
        processes[i].priority = rand() % 5;       // Random priority
        total_time += processes[i].burst_time;
    }

    // Priority with preemption algorithm simulation
    for (current_time = 0; current_time < total_time; current_time++) {
        int highest_priority = -1;
        int highest_priority_process = -1;

        // Find the process with the highest priority that has arrived
        for (int i = 0; i < num_processes; i++) {
            if (processes[i].arrival_time <= current_time &&
                processes[i].burst_time > 0) {
                if (highest_priority == -1 || processes[i].priority < highest_priority) {
                    highest_priority = processes[i].priority;
                    highest_priority_process = i;
                }
            }
        }

        // Execute the highest priority process for one time unit
        if (highest_priority_process != -1) {
            processes[highest_priority_process].burst_time--;
            
            // Check if the process is completed
            if (processes[highest_priority_process].burst_time == 0) {
                processes[highest_priority_process].completion_time = current_time + 1;
                processes[highest_priority_process].turnaround_time = processes[highest_priority_process].completion_time - processes[highest_priority_process].arrival_time;
                processes[highest_priority_process].waiting_time = processes[highest_priority_process].turnaround_time - processes[highest_priority_process].burst_time;
            }
        }
    }

    // Calculate and print the average statistics
    for (int i = 0; i < num_processes; i++) {
        avg_turnaround_time += processes[i].turnaround_time;
        avg_waiting_time += processes[i].waiting_time;
        avg_completion_time += processes[i].completion_time;
    }

    avg_turnaround_time /= num_processes;
    avg_waiting_time /= num_processes;
    avg_completion_time /= num_processes;

    printf("Average Turnaround Time: %.2lf\n", avg_turnaround_time);
    printf("Average Waiting Time: %.2lf\n", avg_waiting_time);
    printf("Average Completion Time: %.2lf\n", avg_completion_time);

    return 0;
}

