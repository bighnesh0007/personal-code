#include <iostream>
#include <queue>
#include <vector>

int main() {
    // Creating a max heap using priority_queue
    std::priority_queue<int> maxHeap;

    // Size limit for the max heap
    const int maxSize = 10;

    // Reading a series of integers until the end of input
    int value;
    while (std::cin >> value) {
        // Inserting the value into the max heap
        maxHeap.push(value);

        // Ensure the max heap does not exceed the specified size
        while (maxHeap.size() > maxSize) {
            maxHeap.pop();
        }

        // Printing the current state of the max heap
        std::cout << "Max Heap: ";
        std::vector<int> temp; // Temporary vector to store elements for printing
        while (!maxHeap.empty()) {
            temp.push_back(maxHeap.top());
            maxHeap.pop();
        }

        // Restore elements to the max heap and print
        for (const auto &element : temp) {
            maxHeap.push(element);
            std::cout << element << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
