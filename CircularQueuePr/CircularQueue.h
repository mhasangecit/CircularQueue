#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

class CircularQueue {
private:
    int* arr;
    int capacity;
    int front1, rear1;
    int front2, rear2;

public:
    CircularQueue(int size);
    void enqueueQueue1(int data);
    void dequeueQueue1();
    void enqueueQueue2(int data);
    void dequeueQueue2();
};

#endif
