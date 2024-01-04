#include "CircularQueue.h"
#include <iostream>
#include <cstddef>


CircularQueue::CircularQueue(int size) {
    capacity = size;
    arr = new int[capacity];
    front1 = rear1 = -1;
    front2 = rear2 = capacity;
}

void CircularQueue::enqueueQueue1(int data) {
    // Implementation
}

void CircularQueue::dequeueQueue1() {
    // Implementation
}

void CircularQueue::enqueueQueue2(int data) {
    // Implementation
}

void CircularQueue::dequeueQueue2() {
    // Implementation
}
